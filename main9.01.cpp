#include <iostream>

int main(int argc, char *argv[])
{
	std::string text = "малина";
	bool run = true;
	std::string textEnter;
	while (run) {
	    std::cout << "Угадайте слово: ";
	    std::cin >> textEnter;
	    if (textEnter == text) {
	        std::cout << "Правильно! Вы победили! Загаданное слово — малина" << std::endl;
	        run = false;
	    }
	}
	return 0;
}