#include <bits/stdc++.h>

using namespace std;

int main() {
    #ifndef ONLINE_JUDGE
        freopen("SEQ1.inp", "r", stdin);
        freopen("SEQ1.out", "w", stdout);
    #endif

    int n;
    cin >> n;

    int args[n + 5] = { 0 }, f[n + 5] = { 0 };
    for (int i = 1; i <= n; i++) {
        cin >> args[i];
        f[i] = min(f[i], args[i]);
    }

    args[0] = INT_MAX;
    int m = 0;
    int res = 0;

    for (int i = 1; i <= n; i++) {
        m = min(m, args[i]);
        res = max(res, args[i] - m);
    }

    cout << res;
    return 0;
}