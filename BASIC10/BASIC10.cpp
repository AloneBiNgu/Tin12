#include <bits/stdc++.h>

using namespace std;

int main() {
    #ifndef ONLINE_JUDGE
        freopen("BASIC10.inp", "r", stdin);
        freopen("BASIC10.out", "w", stdout);
    #endif

    long long n;
    long long tong = 1;

    cin >> n;
    for (int i = 2; i <= sqrt(n); i++) {
        if (n % i == 0) {
            tong += i;
            if (i != n / i) {
                tong += n / i;
            }
        }
    }

    if (tong == n) {
        cout << 1 << '\n';
    } else {
        cout << 0 << '\n';
    }
    return 0;
}