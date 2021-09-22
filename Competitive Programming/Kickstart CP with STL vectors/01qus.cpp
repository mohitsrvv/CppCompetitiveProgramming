#include <bits/stdc++.h>
using namespace std;

int main(){
	int n, q;
	cin>>n>>q;
	vector<int> v(n, 0);
	while(q--){
		int l, r;
		cin>>l>>r;
		v[l]++;
		if(r+1 < n){
			v[r+1]--;
		}
	}
	for(int i=1; i<n; i++){
		v[i] = v[i] + v[i-1];
	}
	for(auto el : v){
		cout<<el<<" ";
	}
	return 0;
}