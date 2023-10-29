#include <bits/stdc++.h>

using namespace std;

int args[105][105];
int f[105][105];

int main() {
    #ifndef ONLINE_JUDGE
        freopen("QBMAX.inp", "r", stdin);
        freopen("QBMAX.out", "w", stdout);
    #endif

    int n, m;
    cin >> n >> m;

    for (int i = 1; i <= m; i++) {
        f[0][i] = f[n + 1][i] = -INT_MAX;
    }
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= m; j++) {
            cin >> args[i][j];
        }
    }

    int res = 0;
    for (int j = 1; j <= m; j++) {
        for (int i = 1; i <= n; i++) {
            f[i][j] = args[i][j] + max(f[i-1][j-1], max(f[i][j-1], f[i+1][j-1]));
        }
    }

    for (int i = 1; i <= n; i++) {
        res = max(res, f[i][m]);
    }

    cout << res << '\n';
    return 0;
}