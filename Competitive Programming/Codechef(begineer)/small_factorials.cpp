// https://www.codechef.com/problems/FCTRL2

#include <bits/stdc++.h>
#include <boost/multiprecision/cpp_int.hpp> 
using namespace boost::multiprecision; 
using namespace std;

int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		cpp_int fact = 1;
		for(int i=1; i<=n; i++){
			fact *= i;
		}
		cout<<fact<<endl;
	}
}







