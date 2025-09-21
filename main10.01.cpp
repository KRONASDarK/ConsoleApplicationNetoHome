#include <iostream>
#include <fstream>
#include <vector>

int main() {
    std::ifstream inputFile("text.txt");

    if (!inputFile.is_open()) {
        std::cerr << "Ошибка открытия файла." << std::endl;
        return 1;
    }

    int size;
    inputFile >> size;

    std::vector<int> arr(size);

    for (int i = 0; i < size && !inputFile.eof(); ++i) {
        inputFile >> arr[i];
    }

    inputFile.close();

    if (arr.size() != static_cast<size_t>(size)) {
        std::cout << "Ошибка: Размер массива не совпадает с заявленным количеством элементов." << std::endl;
        return 1;
    }

    for (auto it = arr.rbegin(); it != arr.rend(); ++it) {
        std::cout << *it << " ";
    }

    return 0;
}
