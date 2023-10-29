#include <bits/stdc++.h>

using namespace std;

int res(string s, string s1) {
    int m = s.length(), n = s1.length();
    s = ' ' + s;
    s1 = ' ' + s1;

    int f[m + 1][n + 1];
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            f[i][j] = 0;
        }
    }
    for (int i = 1; i <= m; i++) {
        for (int j = 1; j <= n; j++) {
            if (s[i] == s1[j]) {
                f[i][j] = f[i - 1][j - 1] + 1;
            } else {
                f[i][j] = max(f[i - 1][j], f[i][j - 1]);
            }
        }
    }

    string res;
    while (f[m][n] > 0) {
        if (s[m] == s1[n]) {
            res += s[m];
            n--, m--;
        } else if (f[m][n] == f[m - 1][n]) {
            m--;
        } else {
            n--;
        }
    }

    reverse(res.begin(), res.end());
    return res.length();
}

int main() {
    #ifndef ONLINE_JUDGE
        freopen("NKPALIN.inp", "r", stdin);
        freopen("NKPALIN.out", "w", stdout);
    #endif

    string s, s1;
    cin >> s;

    s1 = s;
    reverse(s1.begin(), s1.end());

    int n = s.length();
    cout << res(s, s1);
    return 0;
}