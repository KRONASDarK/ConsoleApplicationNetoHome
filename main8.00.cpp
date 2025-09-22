#include <iostream>

int main(int argc, char *argv[])
{
	int size_arr = 0;
	
	std::cout << "Введите размер массива: ";
	std::cin >> size_arr;
	
	int* numbers_arr = new int[size_arr];
	
	for (int x = 0; x < size_arr; x++) {
	    std::cout << "Введите " << x << " элемент массива: ";
	    std::cin >> numbers_arr[x];
	}
	
	std::cout << "Введённый массив :  ";
	for (int x = 0; x < size_arr; x++) {
	    std::cout << numbers_arr[x] << " ";
	}
	delete[] numbers_arr;
	
	return 0;
}