#include <bits/stdc++.h>

using namespace std;

int F[40];

int main(){
    int N;
    cin >> N;
    F[0] = F[1] = 1;
    for (int i = 2; i <= N; i++){
        F[i] = F[i - 1] + F[i - 2];
    }
    cout << F[N] << endl;
    return 0;
}