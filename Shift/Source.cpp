#include <iostream>
void shiftLeft(int arr[], int size, int shiftAmount) {
    shiftAmount = shiftAmount % size;
    for (int i = 0; i < shiftAmount; ++i) {
        int temp = arr[0];
        for (int j = 0; j < size - 1; ++j) {
            arr[j] = arr[j + 1];
        }
        arr[size - 1] = temp;
    }
}

void shiftRight(int arr[], int size, int shiftAmount) {
    shiftAmount = shiftAmount % size;
    for (int i = 0; i < shiftAmount; ++i) {
        int temp = arr[size - 1];
        for (int j = size - 1; j > 0; --j) {
            arr[j] = arr[j - 1];
        }
        arr[0] = temp;
    }
}

void printArray(int arr[], int size) {
    for (int i = 0; i < size; ++i) {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;
}

int main() {
    const int size = 10;
    int fibonacciArray[size] = { 0, 1, 1, 2, 3, 5, 8, 13, 21, 34 };
    int shiftAmount;
    std::cout << "Enter the number of items to cycle to the left: ";
    std::cin >> shiftAmount;
    int a;
    std::cout << "Choose where to move (1-left, 2-right): "; std::cin >> a;
    switch (a)
    {
    case 1: 
    {
        shiftLeft(fibonacciArray, size, shiftAmount);
        std::cout << "The array after a cyclic shift to the left by " << shiftAmount << " elements: ";
        printArray(fibonacciArray, size);
        break;
    }
    case 2: 
    {
        shiftRight(fibonacciArray, size, shiftAmount);
        std::cout<<"The array after a cyclic shift to the right by " << shiftAmount << " elements: ";
        printArray(fibonacciArray, size);
        break;
    }
    } 
}