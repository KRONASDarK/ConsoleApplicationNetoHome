#include <iostream>

int main(int argc, char *argv[])
{
	std::string name1;
	std::string name2;
	
	std::cout << "Введите имя: ";
	std::cin >> name1;
	std::cout << std::endl;
	std::cout << "Введите фамилию: ";
	std::cin >> name2;
	std::cout << std::endl;
	std::cout << "Здравствуйте, " + name1 + " " + name2 + "!";
    return 0;
}