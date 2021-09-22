// https://www.codechef.com/problems/HS08TEST

#include <bits/stdc++.h>
using namespace std;

int main(){
	int a;
	float b;
	cin>>a>>b;
	if(a % 5 == 0 and b>= a+0.50){
		cout<<fixed<<setprecision(2)<<b-(a+0.50)<<endl;
	} else {
		cout<<fixed<<setprecision(2)<<b<<endl;
	}
}