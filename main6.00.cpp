#include <iostream>

int cf = 0;

void counting_function() {
    cf += 1;
    std::cout << "Количество вызовов функции counting_function(): " << cf << std::endl;
};

int main(int argc, char** argv)
{
    for (int i = 0; i < 15; i++)
    {
        counting_function();
    }
    return 0;
}