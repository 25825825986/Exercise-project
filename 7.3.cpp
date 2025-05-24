#include <bits/stdc++.h>

using namespace std;

int n[205][205] = {0}, dp[205][205] = {0};

void DP(int N, int H, int D){
    for (int i = 0; i < N; i++)
        dp[i][H] = n[i][H];
    for (int j = H - 1; j >= 0; j--){
        for (int i = 0; i < N; i++){
            dp[i][j] = dp[i][j+1] + n[i][j];
            for (int k = 0; k < N; k++)
                dp[i][j] = max(dp[i][j], dp[k][j + D] + n[i][j]);
        }
    }
}

int main(){
    int N, H, Delta, k, h;
    cin >> N >> H >> Delta;
    for (int i = 0; i < N; i++){  // 修改为 i = 0 到 i < N
        cin >> k;
        for (int j = 0; j < k; j++){  // j 从 0 开始
            cin >> h;
            n[i][h]++;
        }
    }
    
    DP(N, H, Delta);

    int ans = 0;
    for (int i = 0; i < N; i++)
        ans = max(ans, dp[i][0]);

    cout << ans << endl;
    return 0;
}


