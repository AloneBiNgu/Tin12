#include <bits/stdc++.h>

using namespace std;

const int MOD = 1e9 + 7;
int n;

int main() {
    #ifndef ONLINE_JUDGE
        freopen("BCFIBO.inp", "r", stdin);
        freopen("BCFIBO.out", "w", stdout);
    #endif

    cin >> n;

    int f[n + 5];
    f[0] = 0, f[1] = 1;

    for (int i = 2; i <= n; i++) {
        f[i] = (f[i - 1] + f[i - 2]) % MOD;
    }

    cout << f[n] << '\n';
    return 0;
}