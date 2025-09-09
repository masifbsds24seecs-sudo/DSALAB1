#include <iostream>
#include "matrix_utils.h"
using namespace std;

void testMatrixMultiplication() {
    cout << "=== Testing Matrix Multiplication ===\n" << endl;
    
    // Test with 2x2 matrices
    vector<vector<int>> A = {{1, 2}, {3, 4}};
    vector<vector<int>> B = {{5, 6}, {7, 8}};
    
    vector<vector<int>> standardResult = standardMultiply(A, B);
    vector<vector<int>> strassenResult = strassenMultiply(A, B);
    
    cout << "Test 1 - 2x2 matrices: ";
    bool testPassed = true;
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            if (standardResult[i][j] != strassenResult[i][j]) {
                testPassed = false;
                break;
            }
        }
    }
    cout << (testPassed ? "✓ PASS" : "✗ FAIL") << endl;
    
    // Print results for visual verification
    cout << "\nMatrix A:" << endl;
    printMatrix(A);
    
    cout << "Matrix B:" << endl;
    printMatrix(B);
    
    cout << "Standard multiplication result:" << endl;
    printMatrix(standardResult);
    
    cout << "Strassen's multiplication result:" << endl;
    printMatrix(strassenResult);
    
    cout << "\n=== All tests completed ===\n" << endl;
}

int main() {
    testMatrixMultiplication();
    return 0;
}
