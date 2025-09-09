#include <iostream>
#include <string>

// Перевод целого числа в слово
std::string numberToWords(int n) {
    const std::string negativePrefix = "минус ";

    std::string ones[] = {"ноль", "один", "два", "три", "четыре", "пять", "шесть", "семь", "восемь", "девять",
                     "десять", "одиннадцать", "двенадцать", "тринадцать", "четырнадцать", "пятнадцать",
                     "шестнадцать", "семнадцать", "восемнадцать", "девятнадцать"};

    std::string tens[] = {"", "", "двадцать", "тридцать", "сорок", "пятьдесят", "шестьдесят", "семьдесят",
                     "восемьдесят", "девяносто"};

    bool isNegative = false;
    if (n < 0) {
        isNegative = true;
        n = abs(n); // Работаем с положительным числом дальше
    }

    if (n >= 0 && n <= 19) {
        return (isNegative ? negativePrefix : "") + ones[n];
    } else if (n >= 20 && n <= 99) {
        return (isNegative ? negativePrefix : "") + tens[n / 10] +
               ((n % 10 != 0) ? " " + ones[n % 10] : "");
    } else if (n == 100) {
        return (isNegative ? negativePrefix : "") + "сто";
    }
    throw std::invalid_argument("Поддерживаются числа от -100 до 100");
}

int main() {
    int firstNumber, secondNumber;

    std::cout << "Введите первое целое число: ";
    std::cin >> firstNumber;
    std::cout << "Введите второе целое число: ";
    std::cin >> secondNumber;

    try {
        if (firstNumber > secondNumber) {
            std::cout << numberToWords(firstNumber) << " больше чем " << numberToWords(secondNumber);
        } else if (firstNumber < secondNumber) {
            std::cout << numberToWords(firstNumber) << " меньше чем " << numberToWords(secondNumber);
        } else {
            std::cout << numberToWords(firstNumber) << " равно " << numberToWords(secondNumber);
        }
    } catch(const std::exception& e) {
        std::cerr << "Ошибка: " << e.what();
    }

    return 0;
}