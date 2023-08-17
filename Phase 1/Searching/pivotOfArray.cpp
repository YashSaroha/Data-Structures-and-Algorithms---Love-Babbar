#include<iostream>
using namespace std;

int pivot( int arr[] , int size )
{
    int s = 0;
    int e = size - 1;
    int mid = s + ( e-s )/2 ;

    while ( s<e )
    {
        if( arr[mid] >= arr[0] )
        {
            s = mid + 1 ;
        }
        else
        {
            e = mid - 1;
        }
        mid = s + ( e-s )/2 ;
    }
    return s;
}

int main()
{
    int arr[5] = { 5,9,12,1,2 };
    int index = pivot( arr,5 );
    cout << "The pivot element is " << arr[index] << " having index " << index ;

    return 0;
}