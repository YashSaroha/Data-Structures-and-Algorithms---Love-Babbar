// find a raise to power b

#include<iostream>
using namespace std;

int main()
{
    int a,b ;
    cout << "Enter a and b : ";
    cin >> a >> b;
    int ans = 1;
    for ( int i=1 ; i<=b ; i++ )
    {
        ans = ans * a;
    }
    cout << a << " raise to power " << b << " is " << ans << endl;
    return 0 ;
}