#include <iostream>

int main(int argc, char *argv[])
{
	int numbers[10]{1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
	
	for (int x : numbers) {
	    if (x != 10) {
	        std::cout << x << ", ";
	    } else {
	        std::cout << x;
	    }
	}
	
	return 0;
}