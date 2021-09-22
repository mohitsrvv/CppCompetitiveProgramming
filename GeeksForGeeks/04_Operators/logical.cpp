#include <bits/stdc++.h>
using namespace std;

int main(){
    int x=10, y=20;
    bool res = (x>0 && x<100);
    cout<<res<<endl;
    res = (x>0 || x>y);
    cout<<res<<endl;
    res = !res;
    cout<<res<<endl;
    x = 5;
    // Short circuiting
    res = (x>10)&&(x++);
    cout<<res<<" "<<x<<endl;
    return 0;
}