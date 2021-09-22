#include <bits/stdc++.h>

int main(){
	std::stack<int> s1; // uses a deque
	std::vector<int> v {1,2,3,4,5};
	std::stack<int, std::vector<int> > s2(v); // this is implemented using a vector

	s1.push(10);
	s1.push(20);
	s1.emplace(30);

	s1.pop(); //remoove an element from stack

	while(s2.size() > 0){
		std::cout<<s2.top()<<" ";
		s2.pop();
	}
	std::cout<<"\n";
	while(s1.size() > 0){
		std::cout<<s1.top()<<" ";
		s1.pop();
	}
}