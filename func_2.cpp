#include <iostream>
#include <string>
using namespace std;

// Function to find first occurrence of pattern in text
int naivePatternMatch(const string &text, const string &pattern) {
    int n = text.size();
    int m = pattern.size();

    if (m == 0) return 0;  // Empty pattern → return 0

    for (int i = 0; i <= n - m; i++) {
        int j = 0;
        while (j < m && text[i + j] == pattern[j]) {
            j++;
        }
        if (j == m) return i;  // Found match at index i
    }
    return -1;  // Not found
}

int main() {
    // Test cases
    cout << "Case 1: " << naivePatternMatch("hello world", "hello") << endl;   // Beginning
    cout << "Case 2: " << naivePatternMatch("hello world", "world") << endl;   // End
    cout << "Case 3: " << naivePatternMatch("hello world", "abc") << endl;     // Not present
    cout << "Case 4: " << naivePatternMatch("hello world", "") << endl;        // Empty pattern
    return 0;
}
