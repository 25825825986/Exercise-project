#include <bits/stdc++.h>

using namespace std;

string s;

int main(){
    getline(cin, s);
    cout << s << endl;
    int count = 0;
    for (int i = 0; i < s.size(); i ++){
        if(s[i] != ' ')
            count++;
    }
    cout << count << endl;
    return 0;
}