#include <iostream>

// Функция сортировки трех чисел в порядке убывания с использованием тернарного оператора
void sortDescending(int &a, int &b, int &c) {
    bool swapAB = (a < b);     // True, если a < b
    int tempA = swapAB ? b : a; // Запоминаем большее значение
    int tempB = swapAB ? a : b; // Запоминаем меньшее значение

    // Теперь работаем с tempA и третьим числом
    bool swapAC = (tempA < c);  // True, если tempA < c
    int final_max = swapAC ? c : tempA; // Максимальное значение
    int final_mid = swapAC ? tempA : c; // Второе по величине значение

    // Определяю наименьшее значение
    int final_min = tempB < final_mid ? tempB : final_mid;

    // Назначаю переменным правильные значения
    a = final_max;
    b = final_mid;
    c = final_min;
}

int main() {
    int num1, num2, num3;

    std::cout << "Введите первое число: ";
    std::cin >> num1;
    std::cout << "Введите второе число: ";
    std::cin >> num2;
    std::cout << "Введите третье число: ";
    std::cin >> num3;

    sortDescending(num1, num2, num3);
    
    std::cout << std::endl;
    std::cout << "Результат: "
         << num1 << ", " << num2 << ", " << num3 << std::endl;

    return 0;
}