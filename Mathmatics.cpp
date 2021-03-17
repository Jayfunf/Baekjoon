#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <algorithm>

using namespace std;
long long A;
long long B;
long long sum1;
long long sum2;
long long sum3;
long long sum4;

long long dp[91];

long long solve(long long N){
  if(N == 0)return 1;
  if(N == 1)return 1;
  if(dp[N] != 0)return dp[N];
  return dp[N] = solve(N -1)*N;  
}

/*int main() {
  cin>>A >> B;
  sum1 = solve(A);
  cout << sum1;
  sum2 = solve(B);
  cout << sum2;
  sum3 = solve(A-B);
  cout << sum3;

  sum4 = sum1/(sum2*sum3);

  cout << sum4;
  return 0;
}*/

int main(){
    cin >> A;

    cout << solve(A);
}