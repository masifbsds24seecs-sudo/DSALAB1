#include "matrix_utils.h"
#include <iostream>
using namespace std;

vector<vector<int>> standardMultiply(const vector<vector<int>> &A, const vector<vector<int>> &B) {
    int n = A.size();
    vector<vector<int>> C(n, vector<int>(n, 0));
    
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            for (int k = 0; k < n; k++) {
                C[i][j] += A[i][k] * B[k][j];
            }
        }
    }
    return C;
}

vector<vector<int>> strassenMultiply(const vector<vector<int>> &A, const vector<vector<int>> &B) {
    int n = A.size();
    if (n != 2) {
        cout << "This implementation only works for 2x2 matrices" << endl;
        return {};
    }
    
    int M1 = (A[0][0] + A[1][1]) * (B[0][0] + B[1][1]);
    int M2 = (A[1][0] + A[1][1]) * B[0][0];
    int M3 = A[0][0] * (B[0][1] - B[1][1]);
    int M4 = A[1][1] * (B[1][0] - B[0][0]);
    int M5 = (A[0][0] + A[0][1]) * B[1][1];
    int M6 = (A[1][0] - A[0][0]) * (B[0][0] + B[0][1]);
    int M7 = (A[0][1] - A[1][1]) * (B[1][0] + B[1][1]);
    
    vector<vector<int>> C(2, vector<int>(2));
    C[0][0] = M1 + M4 - M5 + M7;
    C[0][1] = M3 + M5;
    C[1][0] = M2 + M4;
    C[1][1] = M1 - M2 + M3 + M6;
    
    return C;
}

void printMatrix(const vector<vector<int>> &matrix) {
    for (const auto &row : matrix) {
        for (int num : row) {
            cout << num << " ";
        }
        cout << endl;
    }
}
