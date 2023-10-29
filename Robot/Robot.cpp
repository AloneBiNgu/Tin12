#include <iostream>
#include <vector>

using namespace std;

int main() {
    #ifndef ONLINE_JUDGE
        freopen("Robot.inp", "r", stdin);
        freopen("Robot.out", "w", stdout);
    #endif
    
    int N, M;
    cin >> N >> M;
    
    vector<vector<int>> gold(N, vector<int>(M));
    vector<vector<int>> dp(N, vector<int>(M, 0));

    for (int i = 0; i < N; ++i) {
        for (int j = 0; j < M; ++j) {
            cin >> gold[i][j];
        }
    }

    for (int i = 0; i < N; ++i) {
        for (int j = 0; j < M; ++j) {
            int from_top = (i > 0) ? dp[i - 1][j] : 0;
            int from_left = (j > 0) ? dp[i][j - 1] : 0;
            dp[i][j] = max(from_top, from_left) + gold[i][j];
        }
    }

    int max_gold = dp[N - 1][M - 1];
    
    cout << max_gold << endl;

    return 0;
}
