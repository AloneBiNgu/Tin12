#include <bits/stdc++.h>

using namespace std;

int main() {
    #ifndef ONLINE_JUDGE
        freopen("PHANBIET.inp", "r", stdin);
        freopen("PHANBIET.out", "w", stdout);
    #endif

    int n;
    cin >> n;

    int args;
    set<int> tbl;

    for (int i = 0; i < n; i++) {
        cin >> args;
        tbl.insert(args);
    }

    cout << tbl.size() << '\n';
    return 0;
}