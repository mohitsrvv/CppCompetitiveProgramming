#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cout<<"Enter n: ";
    cin>>n;
    vector<int> v;
    while(n>0){
        int t = n%2;
        v.push_back(t);
        n = n/2;
    }
    for(int i=v.size()-1; i>=0; i--){
        cout<<v[i];
    }
}