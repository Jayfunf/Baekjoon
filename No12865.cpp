#include <iostream>
#include <algorithm>
#include <cstring>
#define F(i,n) for(int i=0; i<n; i++)

using namespace std;
int dp[101][100100];
int arr[101][2];
int N, K;

int dfs(int idx, int remain) {
	if (remain < 0)return -987654321;
	if (idx >= N)return 0;
	int& ret = dp[idx][remain];
	if (ret != -1)return ret;
	ret = max(dfs(idx + 1, remain - arr[idx][0]) + arr[idx][1], dfs(idx + 1, remain));
	return ret;
}

int main() {
	cin >> N >> K;
	memset(dp, -1, sizeof(dp));
	F(i, N)for (int j = 0; j < 2; j++)cin >> arr[i][j];
	cout << dfs(0, K) << endl;
}4 7