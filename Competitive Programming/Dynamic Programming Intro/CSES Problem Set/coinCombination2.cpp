// https://cses.fi/problemset/task/1636
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
#define logarr(arr,a,b)	for(int i=(a);i<=(b);i++) cout<<(arr[i])<<" ";cout<<endl;	
#define token(str,ch)	(std::istringstream var((str)); vs v; string t; while(getline((var), t, (ch))) {v.pb(t);} return v;)
vs tokenizer(string str,char ch) {std::istringstream var((str)); vs v; string t; while(getline((var), t, (ch))) {v.pb(t);} return v;}


// int main(){
// 	long long int n, x;
// 	cin>>n>>x;
// 	vector<long long int> coin(n);
// 	for(int i=0; i<=n-1; i++){
// 		cout<<coin[i];
// 	}
// 	vector<long long int> dp(x+1, 0);
// 	dp[0] = 1;
// 	for(int j=0; j<=n-1; j++){
// 		for(int i=1; i<=x; i++){
// 			if(coin[j] > i) continue;
// 			dp[i] = (dp[i] + dp[i-coin[j]])%mod;
// 		}
// 	}
// 	cout<<dp[x];
// 	return 0;
// }



int main() {
	ll n, x;
	cin>>n>>x;
	vi coin(n);
	loop(i,0, n-1) {
		cin>>coin[i];
	}
	vi dp(x+1, 0);
	dp[0] = 1;
	loop(j, 0, n-1) { // all coins
		loop(i, 1, x) {
			if(coin[j] > i) continue;
			dp[i] = (dp[i] + dp[i-coin[j]])%mod;
		}
	}
	cout<<dp[x];
	return 0;
}