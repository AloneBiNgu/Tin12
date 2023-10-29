#include <bits/stdc++.h>

using namespace std;

int n, k;
int byte[25];

void res() {
    int sum = 0;
    for (int i = 1; i <= n; i++) {
        sum += byte[i];
    }

    if (sum == k) {
        for (int i = 1; i <= n; i++) {
            cout << byte[i] << " ";
        }
        cout << '\n';
    }
}

void sinh(int pos) {
    for (int i = 0; i <= 1; i++) {
        byte[pos] = i;
        if (pos == n) res();
        else sinh(pos + 1);
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    #ifndef ONLINE_JUDGE
        freopen("NHIPHAN.inp", "r", stdin);
        freopen("NHIPHAN.out", "w", stdout);
    #endif

    cin >> n >> k;
    sinh(1);
    return 0;
}