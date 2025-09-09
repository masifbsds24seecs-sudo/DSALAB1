#pragma once
#include <vector>

// Returns all indices i where arr[i] == key.
// Time: O(n), Space: O(k) where k = matches found.
std::vector<int> findIndices(const std::vector<int>& arr, int key);
