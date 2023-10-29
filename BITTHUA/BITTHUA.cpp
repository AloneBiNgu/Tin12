#include <bits/stdc++.h>

using namespace std;

int n, cnt;
int byte[25];

void res() {
    for (int i = 1; i <= n; i++) {
        if (byte[i] == byte[i - 1] && byte[i] == 1) return void();
    }

    cnt++;
    for (int i = 1; i <= n; i++) cout << byte[i] << " ";
    cout << '\n';
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
        freopen("BITTHUA.inp", "r", stdin);
        freopen("BITTHUA.out", "w", stdout);
    #endif

    cin >> n;
    sinh(1);
    cout << cnt << '\n';
    return 0;
}