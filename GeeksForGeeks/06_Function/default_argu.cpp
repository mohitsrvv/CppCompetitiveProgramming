#include <bits/stdc++.h>
using namespace std;

void printDetails(int id, string name = "NA", string address = "NA"){
    cout<<"ID is "<<id<<endl;
    cout<<"Name is "<<name<<endl;
    cout<<"Address is "<<address<<endl;
}

int main(){
    printDetails(101, "Sandeep", "Noida");
    cout<<endl;
    printDetails(201, "Shivam");
    cout<<endl;
    printDetails(301);
    return 0;
}