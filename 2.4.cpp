#include <bits/stdc++.h>

using namespace std;

bool dfs(int &weight){
    int wl, wr, dl, dr;
    cin >> wl >> dl >> wr >> dr;
    bool l = true, r = true;
    if (!wl)
        l = dfs(wl);
    if (!wr)
        r = dfs(wr);
    weight = wr + wl;

    return l && r && wl * dl == wr * dr;
}

int main(){
    int weight;
    cout << dfs(weight) << endl;
    return 0;
}