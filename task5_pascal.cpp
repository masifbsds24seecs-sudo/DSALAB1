#include "pascal_utils.h"
#include <iostream>

vector<vector<int>> generatePascalTriangle(int n) {
    vector<vector<int>> triangle;
    
    if (n <= 0) return triangle;
    
    for (int i = 0; i < n; i++) {
        vector<int> row(i + 1, 1);
        for (int j = 1; j < i; j++) {
            row[j] = triangle[i - 1][j - 1] + triangle[i - 1][j];
        }
        triangle.push_back(row);
    }
    
    return triangle;
}

void printPascalTriangle(const vector<vector<int>> &triangle) {
    for (const auto &row : triangle) {
        for (int num : row) {
            cout << num << " ";
        }
        cout << endl;
    }
}
