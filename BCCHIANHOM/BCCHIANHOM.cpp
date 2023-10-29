#include <bits/stdc++.h>

using namespace std;

int n, k;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    #ifndef ONLINE_JUDGE
        freopen("BCCHIANHOM.inp", "r", stdin);
        freopen("BCCHIANHOM.out", "w", stdout);
    #endif

    cin >> n >> k;
    int args[n + 5];

    for (int i = 0; i < n; i++) {
        cin >> args[i];
    }

    int s = 0;
    for (int i = 0; i < n; i++) {
        s += args[i];
    }

    if (s % k != 0) {
        cout << 0 << '\n';
        return 0;
    }

    int target = s / k;
    int dp[n + 5][k + 5];
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < k; j++) {
            dp[i][j] = 0;
        }
    }

    dp[0][0] = 1;
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= k; j++) {
            for (int m = 0; m < i; m++) {
                if (dp[m][j - 1] && accumulate(args + m, args + i, 0) == target) {
                    dp[i][j] += dp[m][j - 1];
                }
            }
        }
    }

    cout << dp[n][k] << '\n';
    return 0;
}