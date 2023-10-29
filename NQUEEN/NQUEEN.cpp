// https://ee06-171-246-83-180.ngrok-free.app/contests/L12A2/A1/problems/NQUEEN.pdf
#include <bits/stdc++.h>

using namespace std;

int col[105], d1[105], d2[105], X[105], cnt;

void Try(int i, int n) {
    for (int j = 1; j <= n; j++) {
        if (col[j] == 1 &&  d2[i + j - 1] == 1 && d1[i - j + n] == 1) {
            X[i] = j;
            col[j] = d2[i + j - 1] = d1[i - j + n] = 0;
            if (i == n) {
                cnt++;
            }
        } else {
            Try(j + 1, n);
        }
        col[j] = d2[i + j - 1] = d1[i - j + n] = 1;
    }
}

int main() {
    #ifndef ONLINE_JUDGE
        freopen("NQUEEN.INP", "r", stdin);
        freopen("NQUEEN.OUT", "w", stdout);
    #endif

    int n;
    cin >> n;

    for (int i = 1; i <= 100; i++) {
        col[i] = d1[i] = d2[i] = 1;
    }

    Try(1, n);
    cout << cnt;
    return 0;
}