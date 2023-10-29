#include <bits/stdc++.h>

using namespace std;

int minSubstringLength(const string &s) {
    unordered_map<char, int> charCount;
    int requiredCount = 6;
    int minLength = INT_MAX;
    int left = 0;

    for (int right = 0; right < s.length(); right++) {
        char currentChar = s[right];
        if (currentChar == 'A' || currentChar == 'B' || currentChar == 'C' || currentChar == 'D' || currentChar == 'E' || currentChar == 'F') {
            if (charCount[currentChar] == 0) {
                requiredCount--;
            }
            charCount[currentChar]++;
        }

        while (requiredCount == 0) {
            minLength = min(minLength, right - left + 1);
            char leftChar = s[left];
            if (leftChar == 'A' || leftChar == 'B' || leftChar == 'C' || leftChar == 'D' || leftChar == 'E' || leftChar == 'F') {
                charCount[leftChar]--;
                if (charCount[leftChar] == 0) {
                    requiredCount++;
                }
            }
            left++;
        }
    }

    return (minLength != INT_MAX) ? minLength : -1;
}

int main() {
    #ifndef ONLINE_JUDGE
        freopen("ABCDEF.inp", "r", stdin);
        freopen("ABCDEF.out", "w", stdout);
    #endif

    string s;
    cin >> s;

    cout << minSubstringLength(s) << '\n';
    return 0;
}