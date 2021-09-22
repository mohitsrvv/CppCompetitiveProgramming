// "123"
// input => "123"
// output => abc, lc, aw


// #include <bits/stdc++.h>
// using namespace std;

// void codesOfString(string str, string osf, char *mapping) {
// 	// Base case
// 	if(str.size() == 0) {
// 		cout<<osf<<endl;
// 		return;
// 	}
// 	int firstNumber = str[0] - '0';
// 	int secondNumber;
// 	if(str.size() >= 2) {
// 		// when size of string passed is greater than or equal to 2
// 		secondNumber = stoi(str.substr(0, 2));
// 		if(secondNumber <= 26) {
// 			// call allowed
// 			codesOfString(str.substr(2), osf+mapping[secondNumber], mapping);
// 		}
// 		codesOfString(str.substr(1), osf+mapping[firstNumber], mapping);
// 	} else {
// 		// when size of string passed if equal to 1
// 		codesOfString(str.substr(1), osf+mapping[firstNumber], mapping);
// 	}

// }

// int main(){
// 	char mapping[27] = {'#', 'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm','n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z'};
// 	string str;
// 	cin>>str;
// 	codesOfString(str, "", mapping);
// 	return 0;
// }