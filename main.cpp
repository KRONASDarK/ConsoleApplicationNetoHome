#include <iostream>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Russian");
    std::cout << "Дмитрий\n";
    std::cout << "27\n";
}
