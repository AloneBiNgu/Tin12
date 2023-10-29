#include <bits/stdc++.h>

using namespace std;

int n;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    #ifndef ONLINE_JUDGE
        freopen("LIS.inp", "r", stdin);
        freopen("LIS.out", "w", stdout);
    #endif

    cin >> n;
    int args[n + 5];

    for (int i = 0; i < n; i++) {
        cin >> args[i];
    }

    int res = INT_MIN;
    vector<int> f(n + 5, INT_MAX);
    f[0] = INT_MIN;
    for (int i = 0; i < n; i++) {
        int pos = lower_bound(f.begin(), f.end(), args[i]) - f.begin();
        f[pos] = args[i];
        res = max(res, pos);
    }

    cout << res << '\n';
    return 0;
}