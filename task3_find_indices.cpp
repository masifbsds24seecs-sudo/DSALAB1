#include "task3_find_indices.h"

std::vector<int> findIndices(const std::vector<int>& arr, int key) {
    std::vector<int> idx;
    for (int i = 0; i < (int)arr.size(); ++i) {
        if (arr[i] == key) idx.push_back(i);
    }
    return idx;
}
