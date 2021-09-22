#include <bits/stdc++.h>
using namespace std;

int main(){
	int arr[] = {2,32,44,2,4,1,3,21,55,43,24};
	vector<int> v1;
	cout << v1.size() << "\n";
	
	vector<int> v2(5);
	cout << v2.size() << "\n";

	vector<int> v3(6,-1);
	cout << v3.size() << "\n";

	vector<int> v4 {1,2,3,4,5,4,3,2,2,2};
	cout << v4.size() << "\n";

	vector<int> v5 {arr, arr+9}; //{start, end}
	cout << v5.size() << "\n";
	for(int elementv2 : v2)
		cout << elementv2 << " ";
}