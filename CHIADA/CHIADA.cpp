#include <bits/stdc++.h>

using namespace std;

int main() {
    #ifndef ONLINE_JUDGE
        freopen("CHIADA.inp", "r", stdin);
        freopen("CHIADA.out", "w", stdout);
    #endif

    int a, b, c, x, y;
    cin >> a >> b >> c >> x >> y;

    if (a + b + c == x + y) {
        cout << "YES" << '\n';
    } else {
        cout << "NO" << '\n';
    }
    return 0;
}