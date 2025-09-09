#include <iostream>
#include <locale.h>

int main()
{
	setlocale(LC_ALL, "Russian");
	bool x = true, y = true, z = true;
	std::cout << "Оператор: ||\n";
	std::cout.setf(std::cout.boolalpha);
	std::cout << (x && y || z) << ' ' << (x && y || z) << ' ' << (x && y || z) << std::endl;
	std::cout << (!x && y || !z) << ' ' << (x && y || z) << ' ' << (x && y || z) << std::endl;
	std::cout << (x && y || z) << ' ' << (!x && y || !z) << ' ' << (x && y || z) << std::endl;
	std::cout << (!x && y || !z) << ' ' << (!x && y || !z) << ' ' << (!x && y || !z) << std::endl;
    std::cout << std::endl;
	std::cout << "Оператор: &&\n";
	std::cout << (x && y || z) << ' ' << (x && y || z) << ' ' << (x && y || z) << std::endl;
	std::cout << (!x && y || !z) << ' ' << (x && y || z) << ' ' << (!x && y || !z) << std::endl;
	std::cout << (x && y || z) << ' ' << (!x && y || !z) << ' ' << (!x && y || !z) << std::endl;
	std::cout << (!x && y || !z) << ' ' << (!x && y || !z) << ' ' << (!x && y || !z) << std::endl;
	return 0;
}