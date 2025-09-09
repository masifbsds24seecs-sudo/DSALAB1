#include <iostream>
#include "stats_utils.h"
using namespace std;

void testFindMode() {
    cout << "=== Testing findMode Function ===\n" << endl;
    
    // Test 1: Single mode
    int arr1[] = {1, 2, 2, 3, 3, 3, 4};
    vector<int> result1 = findMode(arr1, 7);
    cout << "Test 1 - Single mode: ";
    if (result1.size() == 1 && result1[0] == 3) {
        cout << "✓ PASS" << endl;
    } else {
        cout << "✗ FAIL" << endl;
    }
    
    // Test 2: Multiple modes
    int arr2[] = {1, 1, 2, 2};
    vector<int> result2 = findMode(arr2, 4);
    cout << "Test 2 - Multiple modes: ";
    if (result2.size() == 2 && 
        ((result2[0] == 1 && result2[1] == 2) || 
         (result2[0] == 2 && result2[1] == 1))) {
        cout << "✓ PASS" << endl;
    } else {
        cout << "✗ FAIL" << endl;
    }
    
    // Test 3: Empty array
    int emptyArr[] = {};
    vector<int> result3 = findMode(emptyArr, 0);
    cout << "Test 3 - Empty array: " << (result3.empty() ? "✓ PASS" : "✗ FAIL") << endl;
    
    cout << "\n=== All tests completed ===\n" << endl;
}

int main() {
    testFindMode();
    return 0;
}
