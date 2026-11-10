#include "algorithms.hpp"
#include <iostream>
#include <vector>

int main() {
    std::vector<int> numbers{9, 3, 7, 1, 5, 3};
    std::cout << "Original: ";
    for (int value : numbers) std::cout << value << ' ';
    algorithms::bubble_sort(numbers);
    std::cout << "\nSorted:   ";
    for (int value : numbers) std::cout << value << ' ';
    const auto position = algorithms::binary_search(numbers, 7);
    if (position) std::cout << "\nValue 7 found at index " << *position << '\n';
    else std::cout << "\nValue not found\n";
}
