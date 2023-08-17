#include<iostream>
using namespace std;



void printArray(int arr[] , int n)
{
    for ( int i=0 ; i<n ; i++ )
        cout << arr[i] << " ";
    cout << endl;
}


void swapArray( int arr[] , int n)
{
    for ( int i=0 ; i<n ; i+=2 )
    {
        if ( i+1 < n )
        {
            swap( arr[i] , arr[i+1] );
        }
    }
}


int main()
{
    int n;
    cout << "Enter size : ";
    cin >> n;
    int arr[6] = { 1,2,3,4,5,6 };
    swapArray(arr,n);
    printArray(arr,n);
    

    return 0;
}