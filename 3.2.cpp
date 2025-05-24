#include <bits/stdc++.h>

using namespace std;

int main(){
    int N1, N2, N3;
    cin >> N1 >> N2 >> N3;
    unordered_set<int> A(N1), B(N2), C(N3), ans(N1 + N2 + N3);
    for (int i = 0; i < N1; i++){
        int a = 0;
        cin >> a;
        A.insert(a);
        ans.insert(a);
    } 
    for (int i = 0; i < N2; i++){
        int a = 0;
        cin >> a;
        B.insert(a);
        ans.insert(a);
    } 
    for (int i = 0; i < N3; i++){
        int a = 0;
        cin >> a;
        C.insert(a);
        ans.insert(a);
    }
    cout << A.size() << " " << B.size() << " " << C.size() << " " << ans.size() << endl;
    return 0; 
}