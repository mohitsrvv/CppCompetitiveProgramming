// Codeforces Round #169 (Div. 2) => Little Girl and Maximum Sum
// #include <bits/stdc++.h>
// using namespace std;

// int main(){
// 	int n, q;
// 	cin>>n>>q;
// 	vector<long long int> arr(n);
// 	for(int i=0; i<n; i++){
// 		cin>>arr[i];
// 	}

// 	vector<long long int> idx(n, 0);
// 	while(q--){
// 		int l, r;
// 		cin>>l>>r;
// 		l--; r--;  //to shift from 1 base indexing to 0 base
// 		idx[l]++;
// 		if(r+1 < n) idx[r+1]++;
// 	}
// 	// prefix sun
// 	for(int i=1; i<n; i++){
// 		idx[i] = idx[i] + idx[i-1];
// 	}

// 	sort(arr.begin(), arr.end());
// 	sort(idx.begin(), idx.end());

// 	long long int ans = 0;
// 	for(int i=0; i<n; i++){
// 		ans += (long long int)(arr[i]*idx[i]);
// 	}
// 	cout<<ans<<endl;
// 	return 0;
// }






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




//typedef tree<ll, null_type, less<ll>, rb_tree_tag, tree_order_statistics_node_update> pbds;


int main(int argc, char const *argv[]) {
	
	int n, q;
	cin>>n>>q;
	vector<ll> arr(n);
	for(int i = 0; i < n; i++) {
		cin>>arr[i];
	}
	vector<ll> idx(n, 0);
	while(q--) {
		int l, r;
		cin>>l>>r;
		l--;r--; // to shift from 1 based indexing to 0 based
		idx[l]++;
		if(r+1 < n) idx[r+1]--;
	}

	// prefix sum
	for(int i = 1; i < n; i++) {
		idx[i] = idx[i] + idx[i-1];
	}

	sort(arr.begin(), arr.end());
	sort(idx.begin(), idx.end());

	ll ans = 0;
	for(int i = 0; i < n; i++) {
		ans+= (ll)(arr[i]*idx[i]);
	}
	cout<<ans<<endl;
	return 0;
}