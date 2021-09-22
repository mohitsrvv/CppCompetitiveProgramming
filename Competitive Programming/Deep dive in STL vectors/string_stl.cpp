#include <bits/stdc++.h>
using namespace std;

int main(){
	// string str = "Codechef";
	// cout<<str<<endl;
	// string str1("Mohit");
	// cout<<str1<<endl;
	// string str2(5, 'q');
	// cout<<str2<<endl;
	// for(int i=0; i<5; i++){
	// 	str.push_back('a');
	// }
	// cout<<str<<endl;

	// cout<<str.size()<<endl;
	// cout<<str.capacity()<<endl;
	// cout<<str[3]<<endl;
	// cout<<str.at(2)<<endl;

	// str.swap(str1);
	// cout<<str<<endl;
	// cout<<str1<<endl;

	// string s;
	// while(getline(cin, s))
	// 	cout<<s<<endl;

	// int n;
	// while(cin>>n){
	// 	cout<<n<<endl;
	// }

	// String Tokenizer
	string str;
	cin>>str;

	// strtok
	// char *token = strtok(&str[0], "-");
	// while(token != NULL){
	// 	cout<<token<<"\n";
	// 	token = strtok(NULL, "-");
	// }

	istringstream is(str);
	string token;
	while(getline(is, token, '-')){
		cout<<token<<endl;
	}

	string a = "abc";
	string b = "adc";
	cout << (a<b)<<endl;
}