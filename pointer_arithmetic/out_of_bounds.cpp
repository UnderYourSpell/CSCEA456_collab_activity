#include <iostream>

int main() {
    int* arr = new int[5]; // Allocate memory for an array of 5 integers

    // Fill the array with values
    for (int i = 0; i < 5; ++i) {
        arr[i] = i;
    }

    // Attempt to access memory beyond the allocated space
    std::cout << "Array elements: ";
    for (int i = 0; i < 10; ++i) {
        std::cout << arr[i] << " "; // This can lead to undefined behavior
    }
    
    // Deallocate the memory
    delete[] arr;

    return 0;
}
