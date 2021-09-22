#include <bits/stdc++.h>
using namespace std;

int main(){
    int x;
    cout<<"Enter Your Number: "<<endl;
    cin>>x;
    if(x>0){
        cout<<"Positive ";
        if(x % 2 == 0){
            cout<<"Even";
        } else {
            cout<<"Odd";
        }
    }
    else if(x<0){
        cout<<"Negative ";
        if(x % 2 == 0){
            cout<<"Even";
        } else {
            cout<<"Odd";
        }
    }
    else {
        cout<<"Zero";
    }
}