// https://ee06-171-246-83-180.ngrok-free.app/contests/L12A2/A1/problems/NKNUMFRE.pdf.

#include <bits/stdc++.h>

using namespace std;

int main() {
    #ifndef ONLINE_JUDGE
        freopen("NKNUMFRE.INP", "r", stdin);
        freopen("NKNUMFRE.OUT", "w", stdout);
    #endif

    int a, b, cnt = 0;
    cin >> a >> b;

    for (int i = a; i <= b; i++) {
        int n = i, tmp = 0, res = 0;
        while (n > 0) {
            tmp = n % 10;
            res = res * 10 + tmp;
            n /= 10;
        }
        // cout << m << '\n';
        if (__gcd(i, res) == 1) {
            // cout << i << ' ' << res;
            cnt++;
        }
    }

    cout << cnt << '\n';
    return 0;
}