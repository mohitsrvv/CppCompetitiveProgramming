#include<iostream>
using namespace std;

int countDistinct(int a[], int n)
{
    int count = 0;
    bool isDistinct = true;
    for(int i = 0; i < n; i++)
    {
        isDistinct = true;
        for(int j = i-1; j >= 0; j--)
        {
            if(a[i]==a[j])
            {
                isDistinct = false;
                break;
            }
        }
        if(isDistinct==true)
        {
            count ++ ;
        }
    }
    return count;
}

int main()
{
    int n; 
    cin >> n;
    int a[n];
    for(int i = 0; i < n; i ++)
    {
        cin >> a[i] ; 
    }
    cout << countDistinct(a,n);
    return 0;
}  return 0;
}