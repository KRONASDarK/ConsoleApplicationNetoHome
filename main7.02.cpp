#include <iostream>

void reverse(int* arr, int size) {
    for (int i = 0; i < size / 2; ++i) {
        std::swap(arr[i], arr[size - i - 1]);
    }
}

int main() {
    const int SIZE = 5;
    int array[] = {1, 2, 3, 4, 5};
    
    std::cout << "Исходный массив: ";
    for (int i = 0; i < SIZE; ++i) {
        std::cout << array[i] << ' ';
    }
    std::cout << std::endl;
    
    reverse(array, SIZE);
    
    std::cout << "Развёрнутый массив: ";
    for (int i = 0; i < SIZE; ++i) {
        std::cout << array[i] << ' ';
    }
    std::cout << std::endl;
    
    return 0;
}