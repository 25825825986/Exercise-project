#include <bits/stdc++.h>

using namespace std;

int N[22][22] = {0};

int main(){
    int n;
    cin >> n;
    int num = 1;
    int x = 0, y = n/2+1;
    N[x][y] = 1;
    while(num < n*n){
        num++;
        if(x != 0 && N[x-1][y] == 0){
            x--;
            N[x][y] = num;
        }
    }
}