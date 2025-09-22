#include <iostream>

void create_array(double num) {
    double* arr = new double[num]{0};
    
    std::cout << "Массив: ";
    for (int x = 0; x < num; x++) {
        std::cout << arr[x] << " ";
    }
    
    delete[] arr;
};

int main(int argc, char *argv[])
{
	double num = 0;
	
	std::cout << "Введите размер массива: ";
	std::cin >> num;
	
	create_array(num);
	
	return 0;
}