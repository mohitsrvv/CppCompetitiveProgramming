// find the sunsequense of "abc"
#include <bits/stdc++.h>
using namespace std;

void subsequence(string str, string osf) {
	if(str.size() == 0) {
		// base case
		cout<<osf<<endl;
		return;
	}

	char ch = str[0];
	string ros = str.substr(1); // rest of the string
	subsequence(ros, osf+ch);
	subsequence(ros, osf);
}
int main(){
	string str;
	cin>>str;
	subsequence(str , " ");
}