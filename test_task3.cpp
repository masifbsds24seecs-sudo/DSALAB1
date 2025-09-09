#include <iostream>
#include <vector>
#include <cassert>
#include "task3_find_indices.h"

static void printVec(const std::vector<int>& v) {
    std::cout << "[";
    for (size_t i = 0; i < v.size(); ++i) {
        std::cout << v[i] << (i + 1 < v.size() ? " " : "");
    }
    std::cout << "]";
}

int main() {
    // Test 1: Multiple occurrences
    std::vector<int> a1{1,2,3,2,4,2};
    auto r1 = findIndices(a1, 2);
    assert((r1 == std::vector<int>{1,3,5}));
    std::cout << "Test 1 (multiple): ";
    printVec(r1); std::cout << "  -> PASS\n";

    // Test 2: Key not present
    std::vector<int> a2{5,6,7};
    auto r2 = findIndices(a2, 9);
    assert(r2.empty());
    std::cout << "Test 2 (absent): ";
    printVec(r2); std::cout << "  -> PASS\n";

    // Test 3: Empty array
    std::vector<int> a3{};
    auto r3 = findIndices(a3, 1);
    assert(r3.empty());
    std::cout << "Test 3 (empty): ";
    printVec(r3); std::cout << "  -> PASS\n";

    std::cout << "All Task 3 tests passed.\n";
    return 0;
}
