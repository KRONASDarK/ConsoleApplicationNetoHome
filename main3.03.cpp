#include <iostream>
#include <ctime>
#include <cstdlib>

void printArray(int arr[], int size) {
    for (int i = 0; i < size; ++i) {
        std::cout << arr[i];
        if(i != size - 1) std::cout << ", ";
    }
}

void bubbleSortForward(int arr[], int size) {
    bool swapped;
    for (int i = 0; i < size - 1; ++i) {
        swapped = false;
        for (int j = 0; j < size - i - 1; ++j) {
            if (arr[j] > arr[j + 1]) {
                std::swap(arr[j], arr[j + 1]);
                swapped = true;
            }
        }
        if (!swapped) break;
    }
}

void bubbleSortReverse(int arr[], int size) {
    for (int i = 0; i < size - 1; i++) {
        for (int j = size - 1; j > 0; j--) {
            if (arr[j - 1] < arr[j]) {
                std::swap(arr[j - 1], arr[j]);
            }
        }
    }
}

int main() {
    srand(time(NULL)); // Используем текущее время для генерации случайных чисел
    
    const int SIZE = 10;
    int array[SIZE];
    
    for (int i = 0; i < SIZE; ++i) {
        array[i] = rand() % 200 - 100; // Случайные значения от -100 до 100
    }
    
    std::cout << "Массив до сортировки: ";
    printArray(array, SIZE);
    std::cout << std::endl;
    
    // Выполняем прямую сортировку
    bubbleSortForward(array, SIZE);
   std:: cout << "Массив после прямой сортировки: ";
    printArray(array, SIZE);
    std::cout << std::endl;
    
    // Выполняем обратную сортировку
    bubbleSortReverse(array, SIZE);
    std::cout << "Массив после обратной сортировки: ";
    printArray(array, SIZE);
    std::cout << std::endl;
    
    return 0;
}