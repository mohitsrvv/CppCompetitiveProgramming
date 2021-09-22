#include <iostream>
#include <maps> // orderedmap
#include <unordered_map> // unordered map

int main() {
    // <key--> int, value--> float>
    map<int, float> mp;
    mp[2] = 3.0;
    mp[1] = 4.2;
    mp[6] = 7.8;

    unordered_map<int, int> ump;
    ump[2] = 2;
    ump[9] = 7;
    ump[3] = 16;

    if(ump.find(2) == ump.end()) {
        cout<<"Not Found";
    } else {
        cout<<"Found";
    }
    return 0;
}