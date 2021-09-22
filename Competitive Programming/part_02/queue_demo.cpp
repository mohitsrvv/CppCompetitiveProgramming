#include <bits/stdc++.h>

int main(){
	std::queue<int> q1;
	std::list<int> li(5, 12);
	std::queue<int, std::list<int> > q2(li);
	while(!q2.empty()){
		std::cout<<q2.front()<<" ";
		q2.pop();
	}
	q1.push(10);
	q1.push(20);
	q1.emplace(30);
}