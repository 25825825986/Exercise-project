#include <bits/stdc++.h>

using namespace std;

string N[4];

void dfs(int n, string a, string b, string c){
    if(n <= 0)
        return;
    if(n == 1)
        cout << a << "-->" << n << "-->" << b << endl;
    if(n > 1){
        dfs(n - 1, a, c, b);
        cout << a << "-->" << n << "-->" << b << endl;
        dfs(n - 1, c, b, a);
    }    
}

int main(){
    int m;
    cin >> m;
    for (int i = 1; i < 4; i++)
        cin >> N[i];
    dfs(m, N[1], N[2], N[3]);
    return 0;
}