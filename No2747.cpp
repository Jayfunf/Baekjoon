#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <algorithm>
#include <cstring>
using namespace std;

int dp[46];

int solve(int N){
	if (N == 0)return 0;
	if (N == 1)return 1;
	if (dp[N] != -1) return dp[N];
	return dp[N] = solve(N - 1) + solve(N - 2);
}
int main(void) {
	int N;
	scanf("%d", &N);
	memset(dp, -1, sizeof(dp));
	printf("%d", solve(N));
}