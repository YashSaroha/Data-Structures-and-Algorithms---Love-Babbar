#include<iostream>
using namespace std;

long long int sqRoot( int n )
{
    int s = 0;
    int e = n;
    long long int mid = s + (e-s)/2 ;
    long long int ans = -1;
    
    while ( s<=e )
    {
        long long int square = mid*mid ;
        if ( square == n )
        {
            return mid ;
        }

        else if ( square < n )
        {
            ans = mid ;
            s = mid + 1 ;
        }

        else
        {
            e = mid - 1 ;
        }
        mid = s + (e-s)/2 ;
    }

    return ans ;
}


double morePrecision( int n , int precision , int tempSol )
{
    double factor = 1 ;
    double ans = tempSol ;
    for ( int i=0 ; i<precision ; i++ )
    {
        factor = factor/10 ;
        for ( double j=ans ; j*j<n ; j=j+factor )
        {
            ans = j;
        }
    }
    return ans;
}

int main()
{
    int n;
    cout << "Enter a positive number : ";
    cin >> n;
    int tempSol = sqRoot(n);
    cout << "Square root is : " << morePrecision(n,3,tempSol);
    
    return 0;
}