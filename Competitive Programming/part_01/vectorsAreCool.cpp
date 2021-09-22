#include <bits/stdc++.h>
// using namespace std;

struct Temp {
	int x, y;
	Temp(int x , int y) : x(x), y(y) {}
	Temp(const Temp &t) : x(x), y(y){
		std::cout<<"COpy Made!"<<"\n";
	}
};

int main(){
	// vector<int> v;
	// v.push_back(10);
	// v.push_back(29);
	// v.push_back(30);
	// v.push_back(40);
	// for(int element : v)
	// 	cout << element << " ";
	std::vector<Temp> v1;
	v1.push_back{20,20};
	v1.push_back{20,10};
	v1.push_back(1,2);
	for(int elev1 : v1)
		std::cout<< elev1 << " ";

}