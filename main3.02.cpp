#include <iostream>

const int ROWS = 3;
const int COLS = 6;

int main() {
    
    int arr[ROWS][COLS] = {
        {1, 2, 3, 4, 5, 6}, 
        {7, 8, 9, 10, 11, 12}, 
        {13, 14, 15, 16, 17, 18} 
    };

    
    int minElement = arr[0][0];
    int maxElement = arr[0][0];
    int minRow = 0, minCol = 0;
    int maxRow = 0, maxCol = 0;

    for (int row = 0; row < ROWS; row++) {
        for (int col = 0; col < COLS; col++) {
            if (arr[row][col] < minElement) {
                minElement = arr[row][col];
                minRow = row;
                minCol = col;
            }
            if (arr[row][col] > maxElement) {
                maxElement = arr[row][col];
                maxRow = row;
                maxCol = col;
            }
        }
    }

    std::cout << "Массив:" << std::endl;
    for (int row = 0; row < ROWS; row++) {
        for (int col = 0; col < COLS; col++) {
            std::cout << arr[row][col] << "\t"; 
        }
        std::cout << std::endl;
    }

    std::cout << "Минимальный элемент: " << minElement << " расположен в строке " << minRow + 1 << ", столбце " << minCol + 1 << std::endl;
    std::cout << "Максимальный элемент: " << maxElement << " расположен в строке " << maxRow + 1 << ", столбце " << maxCol + 1 << std::endl;

    return 0;
}