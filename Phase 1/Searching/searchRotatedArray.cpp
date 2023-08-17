#include<iostream>
using namespace std;

int pivotIndex( int arr[] , int size )
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

int binarySearch( int arr[] , int s, int e , int key )
{
    int start = s ;
    int end = e ;
    int mid = start + (end - start)/2 ;
    while ( start <= end )
    {
        if ( arr[mid] == key )
        {
            return mid;
        }

        else if ( key > arr[mid] )
        {
            // jumping to the upper half
            start = mid + 1;
        }

        else
        {
            // jumping to lower half
            end = mid - 1;
        }
        
        mid = start + (end - start)/2 ;

    }
    return -1;
}

int searchRotSort( int arr[], int size , int target )
{
    int pivot = pivotIndex( arr,5 );
    if ( target >= arr[pivot] && target <= arr[pivot-1] )
        return binarySearch( arr, pivot, size-1, 2 );
    else
        return binarySearch( arr, 0, pivot-1, 2 );
}

int main()
{
    int arr[5] = { 5,9,12,1,2 };
    int ans = searchRotSort( arr, 5, 2 );
    
    cout << "The target element is " << arr[ans] << " having index " <<  ans;

    return 0;
}