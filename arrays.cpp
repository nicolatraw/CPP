#include <iostream>

int main() {
    // Declaration and initialization of an array
    int numbers[] = {1, 2, 3, 4, 5};

    // Accessing elements of the array
    std::cout << "Elements of the array: ";
    for (int i = 0; i < 5; ++i) {
        std::cout << numbers[i] << " ";
    }
    std::cout << std::endl;

    return 0;
}
