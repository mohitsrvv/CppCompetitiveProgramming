// Problem Link - https://cses.fi/problemset/task/1633
#include<bits/stdc++.h>
//#include<ext/pb_ds/assoc_container.hpp>
//using namespace __gnu_pbds;
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
	#define logarr(arr,a,b)	for(int i=(a);i<=(b);i++) cout<<(arr[i])<<" ";cout<<endl;	
	#define token(str,ch)	(std::istringstream var((str)); vs v; string t; while(getline((var), t, (ch))) {v.pb(t);} return v;)
	vs tokenizer(string str,char ch) {std::istringstream var((str)); vs v; string t; while(getline((var), t, (ch))) {v.pb(t);} return v;}

int main() {
	int n;
	cin>>n;
	vector<int> dp(n+1, 0);
	dp[0] = dp[1] = 1;
	loop(i, 2, n) {
		loop(j, 1, 6) {
			if(j > i) break;
			dp[i] = (dp[i]%mod + dp[i-j]%mod)%mod;
		}
	}
	cout<<dp[n];
	return 0;
}

