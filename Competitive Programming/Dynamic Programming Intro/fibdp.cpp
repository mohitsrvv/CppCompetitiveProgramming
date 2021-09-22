#include <bits/stdc++.h>
using namespace std;

// recursive code
int fib(int n){
	if (n == 0 or n == 1) return n;
	return fib(n-1) + fib(n-2);
}

// top down DP
int fibTD(int n, vector<int> &dp){
	if (n == 0 or n == 1) return n;
	if(dp[n] != -1){
		// already computed
		return dp[n];
	}
	dp[n] = fib(n-1) + fib(n-2);
	return dp[n];
}

// bottom up DP
int fibBU(int n){
	if (n == 0 or n == 1) return n;
	vector<long long int> dp(n+1, -1);
	dp[0] = 0;
	dp[1] = 1;
	for(int i=2; i<=n; i++){
		dp[i] = dp[i-1] + dp[i-2];
	}
	return dp[n];
}

int main(){
	int n;
	cin>>n;
	vector<int> dp(n+1, -1);
	cout<<fibTD(n, dp)<<endl;
	cout<<fibBU(n)<<endl;
	cout<<fib(n);
}