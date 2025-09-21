#include <iostream>
#include <fstream>
#include <vector>

int main() {
    std::ifstream infile("text.txt");

    if (!infile.is_open()) {
        std::cerr << "Ошибка открытия файла.\\n";
        return 1;
    }

    int rows, cols;
    infile >> rows >> cols;

    std::vector<std::vector<int>> table(rows, std::vector<int>(cols));

    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            infile >> table[i][j];
        }
    }

    infile.close();

    for (const auto& row : table) {
        for (auto rit = row.rbegin(); rit != row.rend(); ++rit) {
            std::cout << *rit << " ";
        }
        std::cout << std::endl;
    }

    return 0;
}
