#include <iostream>
#include <vector>
using namespace std;

int main(int argc, char const *argv[])
{
    int n;
    cin >> n;
    vector <int> arr(n, 0); // initializing a vector (size, value)
    int q; // queries
    cin >> q;
    while (q--) {
        int l, r; // one L and one R
        cin >> l >> r;
        arr[l]++;
        if(r+1 < n) {
            arr[r+1]--;
        }
    }
    // cumulative sum
    for(int i=1; i<n; i++) {
        arr[i] += arr[i-1];
    }
    for(int i=0; i<n; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}
