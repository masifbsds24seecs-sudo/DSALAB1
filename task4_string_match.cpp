#include "string_utils.h"

int findPattern(const string &text, const string &pattern) {
    int n = text.length();
    int m = pattern.length();
    
    if (m == 0) return 0;
    
    for (int i = 0; i <= n - m; i++) {
        int j;
        for (j = 0; j < m; j++) {
            if (text[i + j] != pattern[j]) {
                break;
            }
        }
        if (j == m) {
            return i;
        }
    }
    return -1;
}
