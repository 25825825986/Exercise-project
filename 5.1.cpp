#include <bits/stdc++.h>

using namespace std;

int main(){
    int k;
    cin >> k;
    int sum = 0, day = 0;
    for (int i = 1; i <= k;){
        day++;
        for (int j = 1; j <= day && i <= k; j++){
            sum += day;
            i++;
        }         
    }
    cout << sum << endl;
    return 0;
}