#include<iostream>
using namespace std;

void printArray( int arr[] , int n )
{
    for ( int i=0 ; i<n ; i++ )
        cout << arr[i] ;
}

void sorting0and1 ( int arr[] , int n )
{
    int i=0 ;
    int j = n-1 ;

    while ( i<j )
    {
        while ( arr[i] == 0 && i<j )
            i++ ;
        
        while ( arr[j] == 1 && i<j )
            j-- ;
        
        // ( arr[i] == 1 && arr[j] ==0 )
            swap( arr[i] , arr[j] );
            i++ ;
            j-- ;

    }
}

int main()
{
    int arr[8] = { 1,1,0,0,0,0,1,0 };
    int n;
    cout << "Enter size : ";
    cin >> n;

    sorting0and1( arr , n );
    printArray( arr , n );

    return 0;
}