#include <iostream>
#include <algorithm>
using namespace std;
int dp[1000001];

int Sol(int n) {
	if (dp[n] != -1) return dp[n]; //top-down

	int a=1e6, b=1e6;
	if (!(n % 3)) a =Sol(n / 3) + 1;
	if (!(n % 2)) b = Sol(n / 2) + 1;
	int c = Sol(n-1) + 1;

	return dp[n]=min(a, min(b, c));
}

int main() {
	ios::sync_with_stdio(false); cin.tie(0); cout.tie(0); //시간효율
	int n; cin >> n;
	for (int i = 0; i <= n; i++) dp[i] = -1;
	dp[1] = 0, dp[2] = 1, dp[3] = 1;
	cout << Sol(n);
}