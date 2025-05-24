#include <bits/stdc++.h>

using namespace std;

int N[1001] = {0};

int dfs(int n){
    int ans = 1;
    if(N[n] != 0)
        return N[n];
    for (int i = 1; i <= n / 2; i++){
        ans = ans + dfs(i);
    }
    N[n] = ans;
    return ans;
}

int main (){
    int n;
    cin >> n;
    N[0] = 1;
    cout << dfs(n) << endl;
    return 0;
}