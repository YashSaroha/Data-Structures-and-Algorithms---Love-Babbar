#include<iostream>
#include<cmath>
using namespace std;

int main()
{
    int n;
    cout << "Enter a number : ";
    cin >> n;
    bool isPowerof2 = true;
    
    for ( int x=0 ; x<=30 ; x++)        // int me range 2^31 - 1 mtlb 2^30 tk hoti h islie x <= 30
    {
        if ( pow(2,x) == n )
        {
            isPowerof2 = true;
            break;
        }

        isPowerof2 = false;
    }

    cout << isPowerof2;
    return 0;
}