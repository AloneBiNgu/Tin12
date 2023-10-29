#include <bits/stdc++.h>

using namespace std;

int main() {
    #ifndef ONLINE_JUDGE
        freopen("CAMELCASE.inp", "r", stdin);
        freopen("CAMELCASE.out", "w", stdout);
    #endif

    string s;
    cin >> s;

    int dem = 1;
    for (int i = 0; i < s.length(); i++) {
        for (char c = 'A'; c <= 'Z'; c++) {
            if ((char)s[i] == c) {
                dem++;
            }
        }
    }

    cout << dem << '\n';
    return 0;
}