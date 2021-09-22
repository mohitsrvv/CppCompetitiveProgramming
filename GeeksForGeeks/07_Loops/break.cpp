#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cout<<"Enter N: ";
    cin>>n;
    for(int x=2; x<=n; x++){
        if(n % x == 2){
            cout<<"Smallest Divisor is "<<x;
            break;
        }
    }
    return 0;
}