#include <bits/stdc++.h>

using namespace std;

int f[101], r[101], d[101];

struct pond{
    int fish;
    int num;

    bool operator<(const pond& p)const{
        return fish < p.fish;
    }
};

priority_queue<pond> q;

int main(){
    int m, totaltime, i, j;
    int lesstime = 0, t = 0, ans = 0, fmax = 0;
    pond p;
    cin >> m;

    for (i = 0; i < m; i++)
        cin >> f[i];
    for (i = 0; i < m; i++)
        cin >> r[i];
    for (i = 0; i < m-1; i++)
        cin >> d[i];

    cin >> totaltime;

    for (j = 0; j < m; j++){
        lesstime = totaltime - t;
        ans = 0;
        //初始化
        while(!q.empty())
            q.pop();
        
        for (i = 0; i <= j; i++)
            q.push({f[i], i});

        while(lesstime > 0 && q.top().fish > 0){
            p = q.top();
            ans += p.fish;
            p.fish -= r[p.num];
            q.pop();
            q.push(p);
            lesstime--;
        }
        t += d[j];

        if(ans > fmax)
            fmax = ans;
    }
    cout << fmax << endl;
    return 0;
}