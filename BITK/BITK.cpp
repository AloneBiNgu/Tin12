#include <bits/stdc++.h>

using namespace std;

int p[10005], flag, cnt;

void Result(int arr[], int n, int k) {
    int sum = 0;
    for (int i = 0; i < n; i++) {
        sum += arr[i];
    }

    if (sum == k) {
        flag = 1;
        cnt++;
        for (int i = 0; i < n; i++) {
            cout << arr[i] << ' ';
        }
        cout << '\n';
    }
    return;
}
void Init(int n) {
    for (int i = 0; i < n; i++) {
        p[i] = 0;
    }

    return;
}

void Try(int pos, int arr[], int n, int k) {
    for (int i = 0; i <= 1; i++) {
        arr[pos] = i;
        if (pos == n) {
            Result(arr, n, k);
            return;
        } else {
            Try(pos + 1, arr, n, k);
        }
    }
    return;
}

int main() {
    #ifndef ONLINE_JUDGE
        freopen("BITK.INP", "r", stdin);
        freopen("BITK.OUT", "w", stdout);
    #endif

    int n, k;
    cin >> n >> k;

    Init(n);
    Try(0, p, n, k);
    if (!flag) {
        cout << "NO SOLUTION" << '\n';
    } else {
        cout << cnt << '\n';
    }

    return 0;
}