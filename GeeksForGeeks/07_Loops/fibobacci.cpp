#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cout<<"Enter n: ";
    cin>>n;
    int a = 1;
    int b = 1;
    int c = 0;
    cout<<"1 1 ";
    for(int i=2; i<n; i++){
        c = a + b;
        cout<<c<<" ";
        a = b;
        b = c;
    }
    return 0;
}