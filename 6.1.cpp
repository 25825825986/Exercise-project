#include <bits/stdc++.h>

using namespace std;


int main(){
    int n;
    cin >> n;
    string s;
    cin >> s;
    n = n % 26;
    for (int i = 0; i < s.size(); i++){
        if(s[i] + n > 'z')
            s[i] = 'a' + n - ('z' - s[i]) - 1;
        else
            s[i] += n;
    }
    cout << s << endl;
}