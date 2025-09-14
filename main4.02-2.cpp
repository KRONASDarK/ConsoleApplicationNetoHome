#include <iostream>
#include <vector>

std::vector<long long> fibonacciSequence(int N) {
    std::vector<long long> sequence(N + 1);  // Создаем вектор для хранения последовательности

    // Первые два элемента фиксированы
    sequence[0] = 0;
    sequence[1] = 1;

    // Строим остальные элементы путем итерации
    for (int i = 2; i <= N; ++i) {
        sequence[i] = sequence[i - 1] + sequence[i - 2];
    }

    return sequence;
}

// Функция вывода результата
void printFibonacci(const std::vector<long long>& seq) {
    for (size_t i = 0; i < seq.size(); ++i) {
        std::cout <<  i+1 << "  --->  " << seq[i] << "\n";
    }
}

int main() {
    const int N = 90;   // Количество элементов последовательности
    if (N > 0) {
        auto result = fibonacciSequence(N);
        printFibonacci(result);
    } else {
        std::cerr << "Ошибка: Нужно целое число, больше 0" << std::endl;
    }
    
    return 0;
} 