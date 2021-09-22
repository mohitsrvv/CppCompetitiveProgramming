// you have a value N. you need to print the count of binary strings 
// of length N , with no  consecutive 1's.

// 2,3,5,8....

#include <bits/stdc++.h>
using namespace std;

int binaryFibo(int n){
	// Base work
	if(n==1) return 2;
	if(n==2) return 3;

	// Recursive work
	int cand1 = binaryFibo(n-1);
	int cand2 = binaryFibo(n-2);

	// Self work
	return cand1 + cand2;
}

int main(){
	int n;
	cin>>n;
	cout<<binaryFibo(n);
}