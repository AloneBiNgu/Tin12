#include <bits/stdc++.h>

using namespace std;

int n, s, flag;
int args[25], byte[25];

void res() {
    int sum = 0;
    for (int i = 1; i <= n; i++) {
        if (byte[i] == 1) {
            sum += args[i];
        }
    }

    if (sum == s) {
        flag = 1;
        for (int i = 1; i <= n; i++) {
            if (byte[i] == 1) {
                cout << args[i] << " ";
            }
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
        freopen("ATM01.inp", "r", stdin);
        freopen("ATM01.out", "w", stdout);
    #endif

    cin >> n;
    for (int i = 1; i <= n; i++) {
        cin >> args[i];
    }
    sort(args + 1, args + n + 1);

    cin >> s;
    sinh(1);

    if (!flag) cout << -1;
    return 0;
}