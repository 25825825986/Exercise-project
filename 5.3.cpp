#include <bits/stdc++.h>

using namespace std;

struct node{
    int left;
    int right;
};
node t[1005];
int depth = 0;

int dfs(int n, int h){
    if(n == 0)
        return h;
    depth = max(depth, h);
    dfs(t[n].left, h + 1);
    dfs(t[n].right, h + 1);
    return depth;
}

int main(){
    int n;
    cin >> n;
    for (int i = 1; i <= n; i++)
        cin >> t[i].left >> t[i].right;
    cout << dfs(1, 1) << endl;
    return 0;
}