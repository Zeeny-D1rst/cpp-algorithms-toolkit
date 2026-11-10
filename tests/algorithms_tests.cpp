#include "algorithms.hpp"
#include <cassert>
#include <vector>

int main() {
    std::vector<int> bubble{5, -1, 3, 3, 0};
    algorithms::bubble_sort(bubble);
    assert((bubble == std::vector<int>{-1, 0, 3, 3, 5}));

    std::vector<int> selection{8, 2, 9, 1};
    algorithms::selection_sort(selection);
    assert((selection == std::vector<int>{1, 2, 8, 9}));

    const std::vector<int> sorted{-4, 0, 2, 7, 10};
    assert(algorithms::binary_search(sorted, 7).value() == 3);
    assert(!algorithms::binary_search(sorted, 6).has_value());
    assert(!algorithms::binary_search(std::vector<int>{}, 1).has_value());

    std::vector<int> empty;
    algorithms::bubble_sort(empty);
    algorithms::selection_sort(empty);
    assert(empty.empty());
}
