#include <bits/stdc++.h>

using namespace std;

struct button{
    int num;
    int color;
    int points;
};

button N[200010];

int main(){
    int n, k, p;
    cin >> n >> k >> p;
    for (int i = 1; i <= n; i++){
        cin >> N[i].color >> N[i].points;
        N[i].num = i;
    }
}