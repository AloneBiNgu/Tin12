#include <bits/stdc++.h>

using namespace std;

int main() {
    #ifndef ONLINE_JUDGE
        freopen("TOIGIAN.inp", "r", stdin);
        freopen("TOIGIAN.out", "w", stdout);
    #endif

    int a, b;
    cin >> a >> b;
    cout << ((__gcd(a, b) == 1 || __gcd(a, b) == -1) ? "YES" : "NO") << '\n';
    return 0;
}