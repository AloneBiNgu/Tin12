#include <bits/stdc++.h>

using namespace std;

int dem;

void Try(int pos, int total, int need, int args[]) {
    
}

int main() {
    #ifndef ONLINE_JUDGE
        freopen("DTDOI.inp", "r", stdin);
        freopen("DTDOI.out", "w", stdout);
    #endif

    int n, s;
    int args[n + 5];

    cin >> n >> s;
    for (int i = 1; i <= n; i++) {
        cin >> args[i];
    }
    sort(args + 1, args + n + 1);

    Try(n, 0, s, args);
    return 0;
}