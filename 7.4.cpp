#include <bits/stdc++.h>

using namespace std;

int N[10][10] = {0}, dp[10][10][10][10] = {0};

int main()
{
    int n;
    cin >> n;
    while (1)
    {
        int x, y, z;
        cin >> x >> y >> z;
        N[x][y] = z;
        if (x == 0 && y == 0 && z == 0)
            break;
    }
    for (int i = 1; i <= n; i++)
        for (int j = 1; j <= n; j++)
            for (int k = 1; k <= n; k++)
                for (int l = 1; l <= n; l++)
                {
                    int a = dp[i][j - 1][k - 1][l];
                    int b = dp[i - 1][j][k - 1][l];
                    int c = dp[i - 1][j][k][l - 1];
                    int d = dp[i][j - 1][k][l - 1];

                    dp[i][j][k][l] = max({a, b, c, d}) + N[i][j] + N[k][l];
                    if (i == k && j == l)
                        dp[i][j][k][l] -= N[k][l];
                }
    cout << dp[n][n][n][n] << endl;
    return 0;
}