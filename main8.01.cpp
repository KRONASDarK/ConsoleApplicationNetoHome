#include <iostream>

double *create_array(double num) {
    double* arr = new double[num]{0};
    return arr;
};

int main(int argc, char *argv[])
{
	double num = 0;
	
	std::cout << "Введите размер массива: ";
	std::cin >> num;
	
	double *array = create_array(num);
	
	std::cout << "Массив: ";
    for (int x = 0; x < num; x++) {
        std::cout << array[x] << " ";
    }
    
    delete[] array;
	
	return 0;
}