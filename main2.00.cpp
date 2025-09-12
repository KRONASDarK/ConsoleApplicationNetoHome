#include <iostream>

int main(int argc, char *argv[])
{
	int enterNumber{};
	int sumNumber{ 0 };
	bool run = true;
	while (run) {
	    std::cout << "Введите целое число или число '0', чтобы закончить: ";
	    std::cin >> enterNumber;
	    if (enterNumber != 0) {
	        sumNumber += enterNumber;
	    } else {
	        run = false;
	    }
	}
	std::cout << "Сумма: " << sumNumber;
	
	return 0;
}