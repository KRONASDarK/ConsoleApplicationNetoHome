#include <iostream>

void findMinMax(const int* arr, int size, int& minVal, int& maxVal) {
    
    minVal = arr[0];
    maxVal = arr[0];
    
    for (int i = 1; i < size; ++i) {
        if (arr[i] > maxVal) {
            maxVal = arr[i];         
        }
        
        if (arr[i] < minVal) {
            minVal = arr[i];         
        }
    }
}

int main(int argc, char *argv[])
{
	const int SIZE = 10; 
	
	int numbers[10]{2, 3, 1, 7, 6, 8, 9, 5, 4, 10};
	
	int minimum, maximum;
	
	std::cout << "Массив: ";
	for (int x : numbers) {
	    if (x != 10) {
	        std::cout << x << ", ";
	    } else {
	        std::cout << x << std::endl;;
	    }
	}
	
	findMinMax(numbers, SIZE, minimum, maximum); 
	
	std::cout << "Минимальное число: " << minimum << std::endl;
	
    std::cout << "Максимальное число: " << maximum << std::endl;
	
	return 0;
}