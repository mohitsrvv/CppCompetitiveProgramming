#include <bits/stdc++.h>
using namespace std;

int main(){
	int n; 
	cin>>n;
	while(true){
		vector<long long int> arr(n);
		for(int i=0; i<=n-1; i++){
			cin>>arr[i];
		}
		sort(arr.begin(), arr.end());
		long long int ans = 0;
		for(int i=0; i<=n-1; i++){
			for(int j=i+1; j<=n-1; j++){
				auto up = upper_bound(arr.begin(), arr.end(), arr[i]+arr[j]);
				ans += (arr.end() - up);
			}
		}
		cout<<ans<<endl;
		cin>>n;
		if(n == 0) break;
	}
}