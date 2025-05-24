#include <bits/stdc++.h>

using namespace std;

struct student{
    int rank;
    int num;
    int score;
};
student s[1001];

bool cmp(const student&a, const student &b){
    if(a.score != b.score)
        return a.score > b.score;
    return a.num < b.num;
}

int main(){
    int N,r = 1,p =1;
    cin >> N;
    for (int i = 0; i < N; i++)
        cin >> s[i].num >> s[i].score;
    sort(s, s + N, cmp);
    for (int i = 0; i < N; i++){
        if(i == 0)
            s[i].rank = p;
        else if( s[i].score == s[i-1].score){
            s[i].rank = r;
            p++;
        }
        else{
            r += p;
            p = 1;
            s[i].rank = r;
        }
    }
    for (int i = 0; i < N; i++){
        cout << s[i].rank << " " << s[i].num << " " <<  s[i].score << endl;
    }
        return 0;
}