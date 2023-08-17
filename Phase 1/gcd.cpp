// GCD BY EUCLID ALGORITHM
// GCD formula is gcd(a,b) = gcd(a-b,b) or gcd( a%b , b)
// example gcd(72,24) is gcd(72-24,24) = gcd(48,24) = gcd(48-24,24) = gcd(24,24) = gcd(24-24,24) = gcd(0,24)
// jaise hi ek number 0 aa jaega tb answer is the second number i.e 24

#include<iostream>
using namespace std;

int gcd(int a, int b)
{
    if(a==0)
    return b;

    if(b==0)
    return a;

    while(a != b)
    {
        if(a > b)
            a = a-b ;
        else 
            b = b-a ;
    }
    return a;
}

int main()
{
    int a,b;
    cin >> a >> b;
    int ans = gcd(a,b);
    cout << "gcd of " << a << " and " << b << " is : " << ans << endl;
}