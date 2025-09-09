#include <iostream>
#include "string_utils.h"
using namespace std;

void testFindPattern() {
    cout << "=== Testing findPattern Function ===\n" << endl;
    
    // Test 1: Pattern at beginning
    int result1 = findPattern("abcworld", "abc");
    cout << "Test 1 - Pattern at start: " << result1;
    cout << (result1 == 0 ? " ✓ PASS" : " ✗ FAIL") << endl;
    
    // Test 2: Pattern at end
    int result2 = findPattern("helloabc", "abc");
    cout << "Test 2 - Pattern at end: " << result2;
    cout << (result2 == 5 ? " ✓ PASS" : " ✗ FAIL") << endl;
    
    // Test 3: Pattern not present
    int result3 = findPattern("hello", "xyz");
    cout << "Test 3 - Pattern not found: " << result3;
    cout << (result3 == -1 ? " ✓ PASS" : " ✗ FAIL") << endl;
    
    // Test 4: Empty pattern
    int result4 = findPattern("hello", "");
    cout << "Test 4 - Empty pattern: " << result4;
    cout << (result4 == 0 ? " ✓ PASS" : " ✗ FAIL") << endl;
    
    cout << "\n=== All tests completed ===\n" << endl;
}

int main() {
    testFindPattern();
    return 0;
}
