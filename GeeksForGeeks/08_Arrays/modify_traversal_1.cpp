#include <bits/stdc++.h>
using namespace std;

int main(){
    int arr[] = {10,30,50,30,30,100};
    int n = sizeof(arr)/sizeof(arr[0]);
    for(int i=0; i<n; i++){
        arr[i] = arr[i]*2;
    }
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}