#include <bits/stdc++.h>

using namespace std;

int n, k, cnt;
vector<int> byte;

void res() {
    cnt++;
    for (int i = 0; i < k; i++) {
        cout << byte[i] << " ";
    }
    cout << '\n';
}

void sinh(int pos, int val) {
    if (pos == k) {
        if (val == 0) res();
        return void();
    }

    for (int i = 1; i <= val; i++) {
        byte[pos] = i;
        sinh(pos + 1, val - i);
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    #ifndef ONLINE_JUDGE
        freopen("SNNGUYEN.inp", "r", stdin);
        freopen("SNNGUYEN.out", "w", stdout);
    #endif

    cin >> k >> n;
    byte.resize(k);
    sinh(0, n);
    cout << cnt << '\n';
    return 0;
}