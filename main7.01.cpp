#include <iostream>
#include <locale.h>

void swap(int* a, int* b) {
        int x = *a;
        *a = *b;
        *b = x;
}

int main()
{
        int a = 5, b = 8;

        std::cout << "a = " << a << ", b = " << b << std::endl;

        swap(&a, &b);

        std::cout << "a = " << a << ", b = " << b << std::endl;

        return 0;
}