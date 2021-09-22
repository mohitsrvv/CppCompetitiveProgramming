#include <bits/stdc++.h>
using namespace std;

int main(){
    int count = 0;
    int n;
    cout<<"Enter n: ";
    cin>>n;
    while(n>0){
        n = n / 10;
        count++;
    }
    cout<<count;
}