#include <bits/stdc++.h>

using namespace std;

int N[65535];

bool cmp (const int&a, const int&b){
    return a < b;
}

int main(){
    int n,ans;
    cin >> n;
    for (int i = 1; i <= n-1; i++)
        cin >> N[i];
    N[0] = 0;
    sort(N, N + n, cmp);
    for (int i = 1; i<= n-1; i++){
        if(N[i] - N[i-1] == 2){
            ans = N[i] - 1;
            break;
        }          
    }
    cout << ans << endl;

    return 0;
}