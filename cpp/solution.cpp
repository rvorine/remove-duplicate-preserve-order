#include <iostream>
#include <vector>
#include <unordered_set>

// removeDuplicates removes duplicate values from arr while preserving the
// original order of first occurrences. Returns a new vector with unique elements.
std::vector<int> removeDuplicates(const std::vector<int>& arr) {
    std::unordered_set<int> seen;
    std::vector<int> result;
    for (int item : arr) {
        if (seen.find(item) == seen.end()) {
            seen.insert(item);
            result.push_back(item);
        }
    }
    return result;
}

int main() {
    std::vector<int> sample = {3, 1, 4, 1, 5, 9, 2, 6, 5, 3, 5};
    std::cout << "Original array: ";
    for (int x : sample) std::cout << x << " ";
    std::cout << std::endl;

    std::vector<int> result = removeDuplicates(sample);
    std::cout << "After removing duplicates: ";
    for (int x : result) std::cout << x << " ";
    std::cout << std::endl;

    return 0;
}
