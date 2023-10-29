// https://ee06-171-246-83-180.ngrok-free.app/contests/L12A2/A1/problems/KCHUCAI.pdf
#include <bits/stdc++.h>

using namespace std;

vector<char> words;
bool visited[1005];

void Init(int k) {
    for (char i = 'A'; i <= 'Z'; i++) {
        words.push_back(i);
    }
    return;
}

void Try(int pos) {
    
}

int main() {
    #ifndef ONLINE_JUDGE
        freopen("KCHUCAI.INP", "r", stdin);
        freopen("KCHUCAI.OUT", "w", stdout);
    #endif

    int k, n;
    cin >> k >> n;

    Init(k);
    Try()
    return 0;
}