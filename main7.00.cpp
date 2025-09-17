#include <iostream>

void print(int arr[], int size) {
    for (int i = 0; i < size; ++i) {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;
}

int main() {
    int array1[]{1, 2, 3, 4, 5, 6, 7, 8, 9};
    int array2[]{6, 5, 4, 8};
    int array3[]{1, 4, 3, 7, 5};
    
    int size1 = sizeof(array1) / sizeof(array1[0]);
    int size2 = sizeof(array2) / sizeof(array2[0]);
    int size3 = sizeof(array3) / sizeof(array3[0]);
    
    print(array1, size1);
    print(array2, size2);
    print(array3, size3);
    
    return 0;
}