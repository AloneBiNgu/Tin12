#include <bits/stdc++.h>

using namespace std;

int main() {
    #ifndef ONLINE_JUDGE
        freopen("ABCXYZ.inp", "r", stdin);
        freopen("ABCXYZ.out", "w", stdout);
    #endif

    int a, b, c, m;
    cin >> a >> b >> c >> m;

    int dp[1][1], posI, posJ, posK;
    dp[0][0] = 0;
    for (int i = 1; i <= m; i++) {
        for (int j = 1; j <= m; j++) {
            if (a * i + b * j > dp[0][0] && a * i + b * j <= m) {
                dp[0][0] = a * i + b * j;
                posI = i;
                posJ = j;
            }
            
        }
    }

    for (int i = 1; i <= m; i++) {
        if (dp[0][0] + c * i <= m) {
            posK = i;
        }
    }

    cout << posI << " " << posJ << " " << posK;
    return 0;
}