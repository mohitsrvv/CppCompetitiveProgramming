#include <bits/stdc++.h>

int main(){
	std::list<int> l1;
	std::list<int> l2 (4, 11);
	std::list<int> l3 (l2.begin(), l2.end());
	std::list<int> l4(l3);

	l1.push_back(10);
	l1.push_back(20);
	l1.emplace_back(40);
	l1.emplace_front(33);
	l1.push_front(30);
	l1.push_front(40);

	l1.pop_back();
	l1.pop_front();
	
	for(auto &el : l1){
		std::cout<<el<<" ";
	}
	std::cout<<"\n";
	for(auto &el : l2){
		std::cout<<el<<" ";
	}
	std::cout<<"\n";
	for(auto &el : l3){
		std::cout<<el<<" ";
	}
	std::cout<<"\n";
	for(auto &el : l4){
		std::cout<<el<<" ";
	}

}	