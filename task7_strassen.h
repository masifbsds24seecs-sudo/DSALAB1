#pragma once
#include <vector>

// Multiplies two square matrices (size n x n) using Strassen’s algorithm.
// Returns the result as a 2D vector.
std::vector<std::vector<int>> strassenMultiply(
    const std::vector<std::vector<int>>& A,
    const std::vector<std::vector<int>>& B);
