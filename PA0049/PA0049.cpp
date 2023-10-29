#include <bits/stdc++.h>

using namespace std;

int main() {
    #ifndef ONLINE_JUDGE
        freopen("PA0049.inp", "r", stdin);
        freopen("PA0049.out", "w", stdout);
    #endif

    double a, b, k, x, y;
    cin >> a >> b >> k >> x >> y;

    double a1, b1;
    a1 = ceil(((a * k) - x) / 2);
    b1 = ceil(((b * k) - y) / 2);
    int res0 = a1, res1 = b1;

    cout << res0 << " " << res1;
    return 0;
}