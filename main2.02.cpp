#include <iostream>

int main(int argc, char *argv[])
{
	int num{};
	
	std::cout << "Введите целое число: ";
	std::cin >> num;
	
	for (int x = 1; x <= 10; x++) {
	    std::cout << num << " × " << x << " = " << (num * x) << std::endl;
	}
	
	return 0;
}