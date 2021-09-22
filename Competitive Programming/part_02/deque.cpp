#include <bits/stdc++.h>

int main(){
	std::deque<int> d1;
	std::deque<int> d2(5, 10);
	std::deque<int> d3(d2);
	std::deque<int> d4(d2.begin(), d2.end());
	int arr[] = {1,2,3,4,5};
	std::deque<int> d5(arr, arr+5);

	for(auto &el : d5){
		std::cout<<el<<" ";
	}
	if(d5.empty()){
		std::cout<<"Oh No";
	}
	d1.push_back(10);
	d1.push_front(20);
	d1.emplace_back(10);
	d1.emplace_front(20); 
}