#include <bits/stdc++.h>

using namespace std;

char mp[300];

int main(){
    mp['A'] = 10;
    mp['B'] = 11;
    mp['C'] = 12;
    mp['D'] = 13;
    mp['E'] = 14;
    mp['F'] = 15;

    for (char e = '0'; e <= '9'; e++){
        mp[e] = e - '0';
    }

    int N;
    cin >> N;
    while(N--){
        int n;
        cin >> n;
        string s;
        cin >> s;

        int ans = 0;
        for (int i = 0; i < s.size(); i++){
            ans = ans * n + mp[s[i]];
        }

        cout << ans << endl;
    }
    return 0;
}