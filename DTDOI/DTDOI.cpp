#include <bits/stdc++.h>

using namespace std;

bool cmp(int a, int b) {
    return b < a;
}

int main() {
    #ifndef ONLINE_JUDGE
        freopen("DTDOI.inp", "r", stdin);
        freopen("DTDOI.out", "w", stdout);
    #endif

    long long n, s;
    cin >> n >> s;
    int args[n + 5];
    for (int i = 0; i < n; i++) {
        cin >> args[i];
    }
    
    sort(args, args + n, cmp);

    int cnt = 0;
    for (int i = 0; i < n; i++) {
        cnt += s / args[i];
        s %= args[i];
    }

    cout << cnt << '\n';
    return 0;
}