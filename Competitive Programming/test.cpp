#include <bits/stdc++.h>

struct Temp {
	int x, y;
	Temp(int x, int y) : x(x), y(y) {}
	Temp(const Temp &t): x(x), y(y) {
		std::cout<<"Copy Made!"<<"\n";
	}
};

