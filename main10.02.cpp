#include <iostream>
#include <fstream>
#include <vector>

int main() {
    setlocale(LC_ALL, "Rus");
    int size;
    std::cout << "Введите размер массива: ";
    std::cin >> size;

    std::vector<int> arr(size);

    std::cout << "Введите элементы массива:" << std::endl;
    for (int i = 0; i < size; ++i) {
        std::cin >> arr[i];
    }

    std::ofstream outputFile("text.txt");

    if (!outputFile.is_open()) {
        std::cerr << "Ошибка открытия файла." << std::endl;
        return 1;
    }

    outputFile << size << "\\n";

    for (auto rit = arr.rbegin(); rit != arr.rend(); ++rit) {
        outputFile << *rit << " ";
    }

    outputFile.close();

    std::cout << "Данные успешно сохранены в файл text.txt" << std::endl;

    return 0;
}
