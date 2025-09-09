#include <iostream>
#include <string>
using namespace std;

// Function to find first occurrence of pattern in text
int findSubstring(const string &text, const string &pattern) {
    if (pattern.empty()) return -1; // Edge case: empty pattern
    
    int n = text.size();
    int m = pattern.size();
    
    if (m > n) return -1; // Pattern longer than text
    
    for (int i = 0; i <= n - m; i++) {
        int j = 0;
        while (j < m && text[i + j] == pattern[j]) {
            j++;
        }
        if (j == m) return i; // Match found
    }
    return -1; // Not found
}