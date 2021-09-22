#include <bits/stdc++.h>
using namespace std;

int main(){
    int arr[] = {10,30,40,20,90,100};
    for(int &x : arr){
        x = x*2;
    }
    for(int x : arr){
        cout<<x<<" ";
    }
    return 0;
}