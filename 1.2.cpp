#include <bits/stdc++.h>

using namespace std;

int main(){
    int n, x;
    cin >> n >> x;
    int count = 0;
    for (int i = 1; i <= n; i++){
        string n = to_string(i);
        for (int j = 0; j < n.size(); j++){
            int num = n[j] - '0';
            if(num == x)
                count++;
        }
    }
    cout << count << endl;
    return 0;
}