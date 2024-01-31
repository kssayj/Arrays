#include <iostream>
int main(){
	const int SIZE = 10;
	int arr[SIZE];
	std::cout << "Enter the numbers in the array: " << std::endl;
	for (int i = 0; i < SIZE; i++) {
		std::cin >> arr[i];
	}
	std::cout << std::endl;
	std::cout << "Array: " << std::endl;
	for (int i = 0; i < SIZE; i++) {
		std::cout << "arr[" << i << "] = " << arr[i]<< std::endl; 
	}
	std::cout << std::endl;
	std::cout << "Reverse: ";
	for (int i = SIZE - 1; i >= 0; i--) {
		std::cout << arr[i] << " ";
	}
	std::cout << std::endl;
	std::cout << "Sum of array's elements: ";
	int sum = 0;
	for (int i = 0; i < SIZE; i++)
	{
		sum += arr[i];
	}
	std::cout << sum << std::endl;
	std::cout << "The arithmetic mean: " << sum / SIZE << std::endl;
	int minVal = arr[0];
	int maxVal = arr[0];
	for (int i = 1; i < SIZE; i++) {
		if (arr[i] < minVal) {
			minVal = arr[i];
		}
		if (arr[i] > maxVal) {
			maxVal = arr[i];
		}
	}
	std::cout << "Min value: " << minVal << std::endl;
	std::cout << "Max value: " << maxVal << std::endl;
	std::cout << std::endl;
}