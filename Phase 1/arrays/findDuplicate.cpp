#include<iostream>
using namespace std;

int duplicate( int arr[] , int size )
{
    int ans = 0;

    // XORing all the array elements
    for ( int i=0 ; i<size ; i++ )
    {
        ans = ans ^ arr[i];
    }

    // XORing from 1 to size-1
    for ( int i=1 ; i<size ; i++ )
    {
        ans = ans ^ i ;
    }

    return ans;
}

int main()
{
    int n;
    cout << "Enter the size : ";
    cin >> n;
    int arr[7] = { 1,2,3,4,5,6,1 };

    int result = duplicate(arr,n);
    cout << result ;

    return 0;
}