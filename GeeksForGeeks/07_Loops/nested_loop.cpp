#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cout<<"Enter n: ";
    cin>>n;
    for(int x=1; x<=n; x++){
        for(int i=1; i<=10; i++){
            cout<<(x * i)<<" ";
        }
        cout<<endl;
    }
    return 0;
}