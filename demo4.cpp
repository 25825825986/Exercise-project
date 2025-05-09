#include <bits/stdc++.h>

using namespace std;

int dp[101][101], ret[101][101];
int xy[4][2] = {{0, 1}, {1, 0}, {0, -1}, {-1, 0}};
int m, n;

int dfs(int a, int b){
    if(dp[a][b] != -1)
        return dp[a][b];
    dp[a][b] = 1;
    for (int i = 0; i < 4; i++){
        int na = a + xy[i][0], nb = b + xy[i][1];
        if(na >= 0 && na < m && nb >= 0 && nb < n && ret[na][nb] < ret[a][b])
            dp[a][b] = max(dp[a][b], dfs(na, nb) + 1);
    }
    return dp[a][b];
}

int main(){
    cin >> m >> n;
    for (int i = 0; i < m; i++){
        for (int j = 0; j < n; j++)
            cin >> ret[i][j];
    }

    //初始化数组
    memset(dp, -1, sizeof(dp));

    int ans = 0;
    for (int i = 0; i < m; i++){
        for (int j = 0; j < n; j++)
            ans = max(ans, dfs(i, j));
    }
    cout << ans << endl;
    return 0;
}