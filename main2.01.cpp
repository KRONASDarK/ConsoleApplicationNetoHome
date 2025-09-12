#include <iostream>

int main() {
    int num;
    
    std::cout << "Введите целое число: ";
    std::cin >> num;
    
    int sum = 0;
    while(num > 0){
        sum += num % 10; 
        num /= 10; 
    }
    
    std::cout << "Сумма цифр равна: " << sum << std::endl;
    
    return 0;
}