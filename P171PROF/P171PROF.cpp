#include <bits/stdc++.h>

using namespace std;

int main() {
    #ifndef ONLINE_JUDGE
        freopen("P171PROF.inp", "r", stdin);
        freopen("P171PROF.out", "w", stdout);
    #endif

    int n;
    cin >> n;
    
    int args[n + 5];
    for (int i = 0; i < n; i++) {
        cin >> args[i];
    }

    sort(args, args + n);
    int res = n;
    for (int i = 1; i < n; i++) {
        int time = 0;
        for (int j = 0; j < i; j++) {
            time += args[j];
        }

        if (time > args[i]) {
            res--;
            args[i] = 0;
        }
    }

    // for (int i = 0; i < n; i++) {
    //     cout << args[i] << ' ';
    // }
    cout << res;
    return 0;
}