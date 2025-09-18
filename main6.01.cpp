#include <iostream>

namespace one {
    int calc(int a, int b) {
        int sum = a + b;
        return sum;
    }
}

namespace two {
    int calc(int a, int b) {
        int diff = a - b;
        return diff;
    }
}

namespace three {
    int calc(int a, int b) {
        int mult = a * b;
        return mult;
    }
}

namespace four {
    int calc(int a, int b) {
        int div = a / b;
        return div;
    }
}

int main() {
    int a = 6, b = 9;
    std::cout << "a = " << a << ", " << "b = " << b << std::endl;

    std::cout << "Сложение: " << one::calc(a, b) << std::endl;
    std::cout << "Вычитание: " << two::calc(a, b) << std::endl;
    std::cout << "Умножение: " << three::calc(a, b) << std::endl;
    std::cout << "Деление: " << four::calc(a, b) << std::endl;

    return 0;
}