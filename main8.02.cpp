#include <iostream>

int** create_two_dim_array(int rows, int cols) {
    int** array = new int*[rows];
    
    for (int i = 0; i < rows; ++i) {
        array[i] = new int[cols]{};
    }
    
    return array;
}

void fill_two_dim_array(int** arr, int rows, int cols) {
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            arr[i][j] = (i+1)*(j+1);
        }
    }
}

void print_two_dim_array(int** arr, int rows, int cols) {
    std::cout << "Таблица умножения:" << std::endl;
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            std::cout << arr[i][j] << ' ' << "\t";
        }
        std::cout << std::endl;
    }
}

void delete_two_dim_array(int** arr, int rows) {
    for (int i = 0; i < rows; ++i) {
        delete[] arr[i];
    }
    
    delete[] arr;
}

int main() {
    int rows, cols;
    
    std::cout << "Введите количество строк: ";
    std::cin >> rows;
    std::cout << "Введите количество столбцов: ";
    std::cin >> cols;
    
    int** table = create_two_dim_array(rows, cols);
    
    fill_two_dim_array(table, rows, cols);
    
    print_two_dim_array(table, rows, cols);
    
    delete_two_dim_array(table, rows);
    
    return 0;
}