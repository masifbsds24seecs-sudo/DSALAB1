#pragma once
#include <string>

// Returns the starting index of the first occurrence of 'pattern' in 'text'.
// If not found, returns -1. Uses naive string matching algorithm.
int naiveSearch(const std::string& text, const std::string& pattern);
