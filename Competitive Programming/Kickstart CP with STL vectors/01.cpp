#include <bits/stdc++.h>
using namespace std;

int main(){
	vector<int> v1;
	vector<int> v2(10);
	vector<int> v3(10, 2);
	vector<int> v4 {10, 20, 30};
	vector<int> v5(v4.begin(), v4.end());
	int arr[] = {1, 2, 3, 4, 5};
	vector<int> v6(arr, arr+5);

	vector<int> v;
	for(int i=0; i<5; i++){
		v.push_back(i);
	}
	for(int i=0; i<5; i++){
		cout<<v[i]<<" ";
	}
	cout<<endl;
	v[2] = 22;
	for(auto el : v){
		cout<<el<<" ";
	}
}