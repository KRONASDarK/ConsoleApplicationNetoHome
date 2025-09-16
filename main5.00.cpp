#include <iostream>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Russian");
    short x = 0;
    int y = 1;
    long q = 2;
    long long i = 3;
    float p = 4;
    double m = 5;
    long double v = 6;
    bool z = false;
    std::cout << "short: " << &x << " " << sizeof(x) << std::endl;
    std::cout << "int: " << &y << " " << sizeof(y) << std::endl;
    std::cout << "long: " << &q << " " << sizeof(q) << std::endl;
    std::cout << "long long: " << &i << " " << sizeof(i) << std::endl;
    std::cout << "float: " << &p << " " << sizeof(p) << std::endl;
    std::cout << "double: " << &m << " " << sizeof(m) << std::endl;
    std::cout << "long double: " << &v << " " << sizeof(v) << std::endl;
    std::cout << "bool: " << &z << " " << sizeof(z) << std::endl;
}
