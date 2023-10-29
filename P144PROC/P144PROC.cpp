#include <bits/stdc++.h>

using namespace std;

const int MOD = 1e9 + 7;

long long calc(long long a, long long b) {
    long long res = 1;
    while (b) {
        if (b % 2 == 1) {
            res = (a * res) % MOD;
        }
        a = (a * a) % MOD;
        b = b / 2;
    }
    return res;
}

int main() {
    ios_base::sync_with_stdio(true);
    cin.tie(nullptr);
    cout.tie(nullptr);

    #ifndef ONLINE_JUDGE
        freopen("P144PROC.inp", "r", stdin);
        freopen("P144PROC.out", "w", stdout);
    #endif

    long long a, b;
    while (true) {
        cin >> a >> b;
        if (a == 0 && b == 0) break;
        cout << calc(a, b) << '\n';
    }
    return 0;
}