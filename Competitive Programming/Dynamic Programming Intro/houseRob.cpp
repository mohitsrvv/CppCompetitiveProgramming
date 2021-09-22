// you are given money present in n adjacent houses.There is a robber
// who wants to rob the houses but he can never rob from 2 adjacent houses,
// find max loot of robber.
// 2, 7 , 9 , 3, 1 
#include <bits/stdc++.h>
using namespace std;

long long int loothouseTD(vector<long long int> &arr, vector<long long int> &dp, int i){
	if(i == 0){
		return dp[0] = arr[0];
	}
	if(i == 1){
		return dp[1] = max(arr[0], arr[1]);
	}
	if(dp[i] != -1) return dp[i];

	return dp[i] = max(loothouseTD(arr, dp, i-1), loothouseTD(arr, dp, i-2)+arr[i]);
}

int main(){
	int n;
	cin>>n;
	vector<long long int> arr(n, 0);
	for(int i=0; i<=n; i++){
		cout<<arr[i];
	}
	vector<long long int> dp(n, -1);
	cout<<loothouseTD(arr, dp, n-1);

}