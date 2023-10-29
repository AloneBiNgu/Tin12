#include <bits/stdc++.h>

using namespace std;


int main() {
    #ifndef ONLINE_JUDGE
        freopen("marsEx.inp", "r", stdin);
        freopen("marsEx.out", "w", stdout);
    #endif

    string s;
    cin >> s;

    int res = 0;
    for (int i = 0; i < s.length(); i += 3) {
        if (s[i] != 'S') {
            res++;
        }
        if (s[i + 1] != 'O') {
            res++;
        }
        if (s[i + 2] != 'S') {
            res++;
        }
    }

    cout << res << '\n';
    return 0;
}