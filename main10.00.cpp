#include <iostream>+
#include <fstream>
#include <locale.h>

int main()
{
	setlocale(LC_ALL, "Rus");
	std::ifstream file("text.txt");
	if (file.is_open()) {
		for (std::string text; file >> text;) std::cout << text << "\n";
	}

	return 0;
}
