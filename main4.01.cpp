#include <iostream>

int degree(int value, int power, int result) {
    for (int i = 0; i < power; i++) {
        result *= value;
    }
    std::cout << value << " в степени " << power << " = " << result << std::endl;
};

int main(int argc, char** argv) {
    int value = 5, power = 2, result = 1;
    
    degree(value, power, result);

    value = 3;
    power = 3;
    result = 1;
    degree(value, power, result);

    value = 4;
    power = 4;
    result = 1;
    degree(value, power, result);
    
    return 0;
}