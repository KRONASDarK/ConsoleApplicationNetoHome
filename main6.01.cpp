#include <iostream>

int calc(int x, int y, char op) {
    switch(op) {
        case '+': return x + y; break;
        case '-': return x - y; break;
        case '*': return x * y; break;
        case '/': 
            if(y != 0) return x / y;
            else throw std::runtime_error("Ошибка: Деление на ноль"); 
            break;
        default: throw std::invalid_argument("Неверный оператор");
    }
}

int main() {
    int x = 6;
    int y = 9;
    try {
        std::cout << calc(x, y, '+') << std::endl;
        std::cout << calc(x, y, '-') << std::endl;
        std::cout << calc(x, y, '*') << std::endl;
        std::cout << calc(x, y, '/') << std::endl;
        std::cout << calc(x, y, '%') << std::endl;
    } catch(const std::exception& ex) {
        std::cerr << "Исключение: " << ex.what() << std::endl;
    }
    
    return 0;
}