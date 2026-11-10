#pragma once
#include <algorithm>
#include <optional>
#include <vector>
#include <cstddef>

namespace algorithms {

template <typename T>
void bubble_sort(std::vector<T>& values) {
    if (values.size() < 2) return;
    for (std::size_t end = values.size(); end > 1; --end) {
        bool swapped = false;
        for (std::size_t i = 1; i < end; ++i) {
            if (values[i] < values[i - 1]) {
                std::swap(values[i], values[i - 1]);
                swapped = true;
            }
        }
        if (!swapped) break;
    }
}

template <typename T>
void selection_sort(std::vector<T>& values) {
    for (std::size_t i = 0; i < values.size(); ++i) {
        auto smallest = i;
        for (std::size_t j = i + 1; j < values.size(); ++j) {
            if (values[j] < values[smallest]) smallest = j;
        }
        std::swap(values[i], values[smallest]);
    }
}

template <typename T>
std::optional<std::size_t> binary_search(const std::vector<T>& values, const T& target) {
    std::size_t low = 0;
    std::size_t high = values.size(); // exclusive upper bound avoids unsigned underflow
    while (low < high) {
        const auto middle = low + (high - low) / 2;
        if (values[middle] == target) return middle;
        if (values[middle] < target) low = middle + 1;
        else high = middle;
    }
    return std::nullopt;
}

} // namespace algorithms
