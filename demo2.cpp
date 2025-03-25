#include <iostream>
using namespace std;

int main(){
    int pencil[3], price[3];
    int need, money = 999999;
    cin >> need;
    cout << endl;
    for (int i = 0; i < 3; i++){
        int temp;
        cin >> pencil[i] >> price[i];
        cout << endl;
        temp = need / pencil[i] * price[i];
        if(temp < money)
            money = temp;
    }
    cout << money << endl;
    return 0;
}