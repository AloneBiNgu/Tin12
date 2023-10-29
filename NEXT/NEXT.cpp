#include <bits/stdc++.h>

using namespace std;

const int MAXN = 1e5 + 5;

int n, minVal = INT_MAX;
vector<int> args;

int binarySearch(vector<int> a, int l, int r, int val) {
    if (r >= l) {
        int mid = (l + r) / 2;
        if (a[mid <= val]) {
            return binarySearch(a, mid + 1, r, val);
        }
        if (a[mid] > val) {
            if (minVal > a[mid]) minVal = a[mid];
            return binarySearch(a, l, mid - 1, val);
        }
    }

    return (minVal != -1 ? minVal : -1);
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    #ifndef ONLINE_JUDGE
        freopen("NEXT.inp", "r", stdin);
        freopen("NEXT.out", "w", stdout);
    #endif

    cin >> n;
    for (int i = 0; i < n; i++) {
        int test; cin >> test;
        args.push_back(test);
    }

    for (int i = 0; i < n; i++) {
        vector<int> newArgs = args;
        newArgs.erase(newArgs.begin() + i);

        cout << binarySearch(newArgs, 0, newArgs.size() - 1, args[i]) << " ";
    }
    return 0;
}