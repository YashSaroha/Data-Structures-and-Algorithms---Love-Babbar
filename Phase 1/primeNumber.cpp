// PRIME NUMBER

#include<iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter a number : ";
    cin >> n;
    
    if ( n==0 || n==1 )
    {
        cout << "Neither prime nor composite";
        return 0;
    }
    
    for (int i=2 ; i<n ; i++)
    {
        if (n%i == 0)
        {
            cout << "Not prime";
            return 0;
        }
    }
    
    cout << "Prime";
    return 0;
}