#include <bits/stdc++.h>

using namespace std;

long long n, fn;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    #ifndef ONLINE_JUDGE
        freopen("fibon.inp", "r", stdin);
        freopen("fibon.out", "w", stdout);
    #endif

    cin >> n >> fn;
    vector<long long> f(n + 5);

    f[0] = 0, f[1] = 1;
    for (int i = 2; i <= n; i++) {
        f[i] = f[i - 1] + f[i - 2];
    }

    cout << fn / f[n] << '\n';
    return 0;
}