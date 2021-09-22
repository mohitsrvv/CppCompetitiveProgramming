#include <bits/stdc++.h>
using namespace std;

int main(){
    int a, b;
    cin>>a>>b;
    int start = max(a,b);
    int end = a * b;
    int ans = start;
    for(int i=start; i<=end; i++){
        if(i%a==0 && i%b==0){
            ans = i;
            break;
        }
    }
    cout<<ans;
    return 0;
}