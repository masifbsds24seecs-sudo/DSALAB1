#ifndef MATRIX_UTILS_H
#define MATRIX_UTILS_H

#include <vector>
using namespace std;

vector<vector<int>> standardMultiply(const vector<vector<int>> &A, const vector<vector<int>> &B);
vector<vector<int>> strassenMultiply(const vector<vector<int>> &A, const vector<vector<int>> &B);
void printMatrix(const vector<vector<int>> &matrix);

#endif
