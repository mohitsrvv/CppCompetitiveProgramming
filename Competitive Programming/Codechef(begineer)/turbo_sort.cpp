// https://www.codechef.com/problems/TSORT

#include <bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin>>t;
	int arr[t];
	for(int i=0; i<t; i++){
		cin>>arr[i];
	}
	sort(arr, arr+t);
	for(int i=0; i<t; i++){
		cout<<arr[i]<<endl;
	}
}