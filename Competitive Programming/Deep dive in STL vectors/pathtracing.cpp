/*Billy likes to wander around. Each day he follows a sequence of up, down, left and right moves. 
At the end of the day, he would like to know where he’s been. You are going to help by providing Billy
with a program that draws a map for him. The program should read a sequence of moves he makes on a given
day and produce a map showing where he’s been.

Input:-
Input is a sequence of up to 500
moves, one move per line, until end of file. Each move is one of left, right, up or down.

down
down
left
left
up
up
up
left
left

Output:-
Print a map of the path described by the sequence of moves. Mark the start and end locations with S and E,
respectively. Mark other locations with *. Outline the whole map with a rectangle made of the # character.
The whole map is the smallest rectangle containing the path. The path never starts and ends at the same 
location. Use spaces to indicate parts of the map which are not visited by the path, but do not use any 
extra spaces (e.g. outside the map outline) 

#######
#E**  #
#  * S#
#  * *#
#  ***#
#######
*/


// #include <bits/stdc++.h>
// using namespace std;

// #define pd 	= push_back

// int main(){
// 	string str;
// 	int curr_x = 0, curr_y = 0, start_x = 0, start_y = 0;
// 	vector<sting> v;
// 	v.pb("*");
// 	while(getline(cin, str)){
// 		if(str == "down"){
// 			curr_y++;
// 			if(curr_y >= v.size()){
// 				string temp(v[0].size(), ' ');
// 				v.pb(temp);
// 			}
// 		}
// 		if(str == "up"){
// 			curr_y--;
// 			if(curr_y < 0){
// 				curr_y++;
// 				start_y++;
// 				string temp(v[0].size(), ' ');
// 				v.insert(v.begin(), temp);
// 			}	
// 		}
// 		if(str == "left"){
// 			curr_x--;
// 			if(curr_x < 0){
// 				curr_x++;
// 				start_x++;
// 				for(auto& x : v){
// 					x.insert(x.begin(), ' ');
// 				}
// 			}
// 		}
// 		if(str == "right"){
// 			curr_x++;
// 			if(curr_x >= v[0].size()){
// 				for(auto& x : v){
// 					x.pb(' ');
// 				}
// 			}
// 		}
// 		// add a step star
// 		v[curr_y][curr_x] = '*';
// 	}
// 	v[curr_y][curr_x] = 'E';
// 	v[start_y][start_x] = 'S;
// 	for(auto& str : v){
// 		str.pb('#');
// 		str.insert(str.begin(), '#');
// 	}
// 	string head_foot(v[0].size(), '#');
// 	v.pb(head_foot);
// 	v.insert(v.begin(), head_foot);
// 	for(string str : v){
// 		cout<<str<<endl;
// 	}
// 	return 0;
// }



// Problem Link - 

#include<bits/stdc++.h>
//#include<ext/pb_ds/assoc_container.hpp>
//using namespace __gnu_pbds;
using namespace std;
#define ll 				long long int
#define mod             1000000007
#define inf             1e18
#define endl			"\n"
#define vi              vector<ll>
#define pii             pair<ll,ll>
#define ump				unordered_map
#define pb 				push_back
#define mp 				map
#define pq_max          priority_queue<ll>
#define pq_min          priority_queue<ll,vi,greater<ll> >
#define ff 				first
#define ss 				second
#define mid(l,r)        (l+(r-l)/2)
#define loop(i,a,b) 	for(int i=(a);i<=(b);i++)
#define looprev(i,a,b) 	for(int i=(a);i>=(b);i--)
#define log(args...) 	{ string _s = #args; replace(_s.begin(), _s.end(), ',', ' '); stringstream _ss(_s); istream_iterator<string> _it(_ss); err(_it, args); }
#define logarr(arr,a,b)	for(int i=(a);i<=(b);i++) cout<<(arr[i])<<" ";	


// void err(istream_iterator<string> it) {}
// template<typename T, typename... Args>
// void err(istream_iterator<string> it, T a, Args... args) {
// 	cout << *it << " = " << a << endl;
// 	err(++it, args...);
// }
//typedef tree<ll, null_type, less<ll>, rb_tree_tag, tree_order_statistics_node_update> pbds;

// void file_i_o()
// {
//     ios_base::sync_with_stdio(0); 
//     cin.tie(0); 
//     cout.tie(0);
// 	#ifndef ONLINE_JUDGE
// 	    freopen("input.txt", "r", stdin);
// 	    freopen("output.txt", "w", stdout);
// 	#endif
// }

int main(int argc, char const *argv[]) {
	// file_i_o();
	string str;
	int curr_x = 0, curr_y = 0, start_x = 0, start_y = 0;
	vector<string> v;
	v.pb("*");
	while(getline(cin, str)) {
		if(str == "down") {
			curr_y++;
			if(curr_y >= v.size()) {
				string temp(v[0].size(), ' ');
				v.pb(temp);
			}
		}
		if(str == "up") {
			curr_y--;
			if(curr_y < 0) {
				curr_y++;
				start_y++;
				string temp(v[0].size(), ' ');
				v.insert(v.begin(), temp);
			}
		}
		if(str == "left") {
			curr_x--;
			if(curr_x < 0) {
				curr_x++;
				start_x++;
				for(auto& x: v) {
					x.insert(x.begin(), ' ');
				}
			}
		}
		if(str == "right") {
			curr_x++;
			if(curr_x >= v[0].size()) {
				for(auto& x: v) {
					x.pb(' ');
				}
			}
		}
		// add a step star
		v[curr_y][curr_x] = '*';
	}
	v[curr_y][curr_x] = 'E';
	v[start_y][start_x] = 'S';
	for(auto& str: v) {
		str.pb('#');
		str.insert(str.begin(), '#');
	}
	string head_foot(v[0].size(), '#');
	v.pb(head_foot);
	v.insert(v.begin(), head_foot);
	for(string str: v) {
		cout<<str<<endl;
	}
	return 0;
}