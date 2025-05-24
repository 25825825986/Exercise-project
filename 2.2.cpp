#include <bits/stdc++.h>

using namespace std;

string M, N, ans;

int main(){
	cin >> M >> N;
	reverse(M.begin(), M.end());
	reverse(N.begin(), N.end());
	int maxn = max(M.size(), N.size());
	int sum = 0;
	for(int i = 0; i < maxn; i++){
		if(i <= M.size())sum += M[i] - '0';
		if(i <= N.size())sum += N[i] - '0';
		ans += to_string(sum % 10);
		sum /= 10;
	}
	reverse(ans.begin(), ans.end());
	cout << ans << endl;
	return 0;
}