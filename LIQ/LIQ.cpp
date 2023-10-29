#include <bits/stdc++.h>

using namespace std;

int n;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    #ifndef ONLINE_JUDGE
        freopen("LIQ.inp", "r", stdin);
        freopen("LIQ.out", "w", stdout);
    #endif

    cin >> n;
    vector<int> args(n + 5);

    for (int i = 0; i < n; i++) {
        cin >> args[i];
    }

    int res = INT_MIN;
    vector<int> f(n + 5, 1);
    for (int i = 1; i < n; i++) {
        for (int j = 0; j < i; j++) {
            if (args[i] > args[j]) {
                f[i] = max(f[i], f[j] + 1);
            }
        }
        res = max(res, f[i]);
    }

    cout << res << '\n';
    return 0;
}