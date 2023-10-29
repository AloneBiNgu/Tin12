#include <bits/stdc++.h>

using namespace std;

int n;

int main() {
    #ifndef ONLINE_JUDGE
        freopen("DOCO.inp", "r", stdin);
        freopen("DOCO.out", "w", stdout);
    #endif

    cin >> n;
    vector<int> items(n + 5, 0);

    items[0] = 1;
    // for (int i = 1; i <= n; i++) {
    //     cin >> items[i];
    //     for (int j = 0; j < i; j++) {
    //         items[j] += 1;
    //     }
    // }

    // cout << *max_element(items.begin(), items.end()) << '\n';
    int mx = items[0];
    for (int i = 1; i <= n; i++) {
        cin >> items[i];
        if (mx + 1 < items[i]) {
            mx = items[i];
        } else {
            mx += 1;
        }
    }

    cout << mx << '\n';
    return 0;
}