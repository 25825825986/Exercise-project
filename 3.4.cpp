#include <bits/stdc++.h>

using namespace std;

int minn = INT_MAX;

struct event{
    char name;
    int num;
    int gold;
};
/*
动态规划，从最后一步向前思考
状态：触发事件后落在n格，面临选择
*/

event e[128];

int getEvent(int m){

    //事件为B时
    if(e[m].name == 'B'){
        int gold = getEvent(m + e[m].num);
        int G = max(getEvent(m - 1), getEvent(m - 2));
        minn = min(minn, G);
        return G;
    }

    //事件为A时
    if(e[m].name == 'A'){
        if(m == 1)
            return e[m].num;
        int gold = e[m].num;
        int G = max(getEvent(m - 1), getEvent(m - 2));
        minn = min(minn, G);
        return G;
    }
    if(m <= 0)
        return 0;
}

int main(){
    int n;
    cin >> n;
    //输入每个格子的事件
    for (int i = 1; i <= n; i++){
        cin >> e[i].name >> e[i].num;
    }

    int ans = getEvent(n);
    if (minn >= 0)
        cout << 0 << endl;
    else
        cout << (0 - minn) << endl;
    return 0;
}
