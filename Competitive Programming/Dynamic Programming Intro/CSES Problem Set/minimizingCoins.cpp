// https://cses.fi/problemset/task/1634
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
#define logarr(arr,a,b)	for(int z=(a);z<=(b);z++) cout<<(arr[z])<<" ";cout<<endl;	
#define token(str,ch)	(std::istringstream var((str)); vs v; string t; while(getline((var), t, (ch))) {v.pb(t);} return v;)
vs tokenizer(string str,char ch) {std::istringstream var((str)); vs v; string t; while(getline((var), t, (ch))) {v.pb(t);} return v;}


int main() {
	int n, x; // x is the value
	cin>>n>>x;
	vector<ll> coin(n);
	loop(i, 0, n-1) {
		cin>>coin[i];
	}
	vector<ll> dp(x+1, INT_MAX);
	dp[0] = 0;
	
	// dp[x] -> f(x)
	loop(i, 1, x) { // for every value of i calculate dp[i]
		loop(j, 0, n-1) {
			if(coin[j] > i) continue;
			dp[i] = min(dp[i], 1 + dp[i-coin[j]]);
		}
	}
	// (a + b)%c = (a%c + b%c)%c
	if(dp[x] == INT_MAX) cout<<-1;
	else cout<<dp[x];
	return 0;
}