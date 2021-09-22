#include <bits/stdc++.h>
using namespace std;

int main()
{
    //user enters side of lengths of triangle (a,b,c)
    //program should write out whether that triangle is
    //equilateral, isosceles or scalene

    float a, b, c;
    cout << "a, b , c: ";
    cin >> a >> b >> c;
    if (a == b && b == c)
    {
        cout << "Equilateral Triangle" << endl;
    }
    else
    {
        if (a != b && b != c && a != c)
        {
            cout << "Scalene Triangle" << endl;
        }
        else
        {
            cout << "Isosceles Triangle" << endl;
        }
    }

    return 0;
}