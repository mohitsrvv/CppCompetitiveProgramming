// Recursion is defined as the process by which a func. of a program repetively
// calls itself untill a base condition comes by keeping an extra memory buffer.
// 0, 1, 1, 2, 3, 5, 8,.....


#include <bits/stdc++.h>
using namespace std;

// f(n) => nth fibonacci
int fibonacci(int n){
	// Base `case
	if(n == 0 or n == 1) return n;

	// Recursive work
	int cand1 = fibonacci(n-1);
	int cand2 = fibonacci(n-2);

	// Self work
	return cand1 + cand2;
}

int main(){
	int n;
	cin>>n;
	cout<<fibonacci(n);
}