#include <bits/stdc++.h>
using namespace std;

#define ll 				long long int
#define ld				long double
#define mod             1000000007
#define inf             1e18
#define endl			"\n"
#define pb 				emplace_back
#define vi              vector<ll>
#define vs				vector<string>
#define pii             pair<ll,ll>
#define ump				unordered_map
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

int main(){
	vector<int> v;
	for(int i=0; i<=2; i++){
		v.push_back(i);
	}
	// for(auto el : v){
	// 	cout<<el<<" ";
	// }

	// do {
	// 	for(auto el : v){
	// 		cout<<el<<" ";
	// 	}
	// 	cout<<endl;
	// } while (next_permutation(v.begin(), v.end()));
	// cout<<"--------"<<endl;
	// do {
	// 	for(int el : v){
	// 		cout<<el<<" ";
	// 	}
	// 	cout<<endl;
	// } while(prev_permutation(v.begin(), v.end()));

	vector<int> v1;
	for(int i=1; i<=10; i++){
		v1.push_back(i);
	}
	for(int i=0; i<=9; i++){
		cout<<v1[i]<<" ";
	}
	cout<<endl;
	vector<int> v2 {1, 2, 2, 3, 3, 4, 5, 6};

	auto it = lower_bound(v2.begin(), v2.end(), 3);

	cout<<(it - v2.begin());
	cout<<endl;
	auto it1 = upper_bound(v2.begin(), v2.end(), 4);
	cout<<(it1 - v2.begin());

}	