#include <bits/stdc++.h>
using namespace std;

bool isSimilar(string a, string b){
    int m,n,i,j;
    if(a.size() < b.size())
        swap(a, b);
    m = a.size();
    n = b.size();
    
    if(abs(m-n) > 1)
        return 0;
    else if(m == n){
        int flag = 0;
        for (i = 0; i < m; i++){
            if(a[i] != b[i])
                flag++;
        }
        if(flag > 1)
            return 0;
        return 1;
    }else{
        int flag = 0;
        for (i = 0, j = 0; i < m && j < n; i++)
        {
            if(a[i] != b[j]){
                flag++;
                if(flag > 1)
                    return 0;
            }
                
            else
                j++;
        }
        
        return 1;
    }
}

int main() {
    int T,k;
    cin >> T;
    string a[T], b[T];
    for (k = 0; k < T; k++)
        cin >> a[k] >> b[k];
    for (k = 0; k < T; k++){
        if(isSimilar(a[k],b[k]))
            cout << "similar" << endl;
        else
            cout << "not similar" << endl;
    }
    return 0;
}
