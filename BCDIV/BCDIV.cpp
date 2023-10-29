#include <bits/stdc++.h>

using namespace std;

int n, k, cnt;
int visit[25], byte[25];

void res() {
    for (int i = 1; i <= n; i++) {
        cout << byte[i] << " ";
    }
    cout << '\n';
}

void backtrack(int pos) {
    if (pos == n + 1) {
        res();
        return void();
    }

    for (int i = 1; i <= n; i++) {
        if (!visit[i]) {
            byte[pos] = i;
            visit[i] = true;
            backtrack(pos + 1);
            visit[i] = false;
        }
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    #ifndef ONLINE_JUDGE
        freopen("BCDIV.inp", "r", stdin);
        freopen("BCDIV.out", "w", stdout);
    #endif

    cin >> n >> k;
    backtrack(1);
    cout << cnt << '\n';
    return 0;
}