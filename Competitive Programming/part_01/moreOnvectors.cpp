#include <bits/stdc++.h>

int main(){
	std::vector<int> v {1,2,3,4,5};
	for(int i=0; i<v.size(); i++){
		std::cout << v[i] << " " << "\n";
	}

	for(int x : v){
		std::cout << x << " ";
	}
}