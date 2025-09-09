#include <iostream>
#include "pascal_utils.h"
using namespace std;

void testPascalTriangle() {
    cout << "=== Testing generatePascalTriangle Function ===\n" << endl;
    
    // Test 1: n = 0
    vector<vector<int>> result1 = generatePascalTriangle(0);
    cout << "Test 1 - n=0: " << (result1.empty() ? "✓ PASS" : "✗ FAIL") << endl;
    
    // Test 2: n = 1
    vector<vector<int>> result2 = generatePascalTriangle(1);
    cout << "Test 2 - n=1: ";
    if (result2.size() == 1 && result2[0][0] == 1) {
        cout << "✓ PASS" << endl;
    } else {
        cout << "✗ FAIL" << endl;
    }
    
    // Test 3: n = 5, check row 4 (index 4)
    vector<vector<int>> result3 = generatePascalTriangle(5);
    cout << "Test 3 - n=5, row 4: ";
    if (result3[4][0] == 1 && result3[4][1] == 4 && result3[4][2] == 6 && 
        result3[4][3] == 4 && result3[4][4] == 1) {
        cout << "✓ PASS" << endl;
    } else {
        cout << "✗ FAIL" << endl;
    }
    
    // Print the triangle for visual verification
    cout << "\nPascal's Triangle (n=5):" << endl;
    printPascalTriangle(result3);
    
    cout << "\n=== All tests completed ===\n" << endl;
}

int main() {
    testPascalTriangle();
    return 0;
}
