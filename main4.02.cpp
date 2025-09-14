#include <iostream>

// Рекурсивная функция для вычисления n-го числа Фибоначчи
long long fibonacci(int n) {
    if (n <= 1) {
        return n;
    }
    return fibonacci(n - 1) + fibonacci(n - 2);
}

int main() {
    int num_elements;
    
    std::cout << "Введите количество элементов последовательности Фибоначчи: ";
    std::cin >> num_elements;

    if (num_elements <= 0) {
        std::cerr << "Ошибка: Количество должно быть положительным числом." << std::endl;
        return 1;
    }

    std::cout << "Первые " << num_elements << " чисел последовательности Фибоначчи:" << std::endl;
    for (int i = 0; i < num_elements; ++i) {
        std::cout << fibonacci(i) << std::endl;
    }

    return 0;
}