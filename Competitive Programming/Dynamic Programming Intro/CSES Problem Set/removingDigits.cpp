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


vi getDigits(int n) {
	vi result;
	while(n) {
		if(n%10 !=0) {
			result.pb(n%10);
		}
		n/=10;
	}
	return result;
}

int main(int argc, char const *argv[]) {
	int n;
	cin>>n;
	vi dp(n+1, INT_MAX);
	loop(i, 1, 9) {
		dp[i] = 1;
	}
	loop(i, 10, n) {
		vi digits = getDigits(i); 
		loop(j, 0, digits.size() - 1) {
			dp[i] = min(dp[i], 1+dp[i-digits[j]]);
		}
	}
	cout<<dp[n];
	return 0;

	// n-1,2,3,4,5,6,7,8,9
}