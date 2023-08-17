// find product and sum of all the digits of any number

#include<iostream>
using namespace std;

int main()
{
    int n ;
    int product = 1;
    int sum = 0;
    cout << "Enter a number : ";
    cin >> n;
    // 234
    while ( n != 0 )
    {
        int digit = n % 10 ;    // 4
        product = product * digit ; // 1*4
        sum = sum + digit ;         // 0 + 4
        n = n/10 ;          // 23
    }
    
    cout << product << " " << sum << endl;

    return 0;
}