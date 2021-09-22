/* Numbers of ways to reach from 0,0 to  [(n.m)->> (n-1, m-1)] 
and print the ways
*/

#include <bits/stdc++.h>
using namespace std;

int mazemap(int cr, int cc, int er, int ec, string osf){
	// basse case
	if(cr == er and cc == ec){
		// valid base case
		cout<<osf<<endl;
		return 1;
	}
	if(cr > er or cc > ec) return 0;


	// recursive task
	int cand1 = mazemap(cr, cc+1, er, ec, osf+"R"); // right
	int cand2 = mazemap(cr+1, cc, er, ec, osf+"D"); // down
	// self work
	return cand2+cand1;

}

int main(){
	int n, m;
	cin>>n>>m;
	cout<<mazemap(0, 0,n-1,m-1, " ");
	return 0;
}