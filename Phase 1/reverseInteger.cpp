#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    int ans = 0;
    cin >> n;
    cout << "Reverse is : ";
    while ( n!= 0 )
    {
        int digit = n % 10 ;    
        if ( (ans > INT_MAX/10) || (ans < INT_MIN/10))
        {
            cout << "0";
        }
        ans = (ans * 10) + digit;
        n = n / 10;
    }
    cout << ans;

    return 0;
}