/* You are given a number n, print all possible number from 1->n
in lexicographical order, 
1 --> 13
--> 1, 10, 11, 12, 13, 2, 3, 4, 5, 6, 7, 8, 9

=> Recursive intution
=> Self work
=> Base case
*/

#include <bits/stdc++.h>
using namespace std;

void lexico(int x, int n) { // f(x, n) -> print from x-n in lexico order

	// base case
	if(x > n) return;
	if(x == n) {
		cout<<x<<endl;
		return;
	}

	// self work ??
	if(x != 0) {
		cout<<x<<endl;
	}
	// recursive task
	for(int i = (x == 0) ? 1 : 0; i<= 9; i++) {
		lexico(10*x+i, n);
	}
}

int main() {
	int n;
	cin>>n;
	lexico(0, n);
	return 0;
}


