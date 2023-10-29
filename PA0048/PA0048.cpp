#include <bits/stdc++.h>

using namespace std;

int main() {
    #ifndef ONLINE_JUDGE
        freopen("PA0048.inp", "r", stdin);
        freopen("PA0048.out", "w", stdout);
    #endif

    int n, x;
    cin >> n >> x;

    cout << ( n / 2 ) * x + x << '\n';
    return 0;
}