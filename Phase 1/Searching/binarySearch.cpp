#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int binarySearch( int arr[] , int size , int key )
{
    int start = 0 ;
    int end = size - 1 ;
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

int main()
{
    int even[6] = { 3,4,6,8,9,16 };
    int odd[5] = { 2,4,6,10,12 };

    int evenIndex = binarySearch( even, 6, 4);
    cout << "Index of 4 is " << evenIndex << endl ;
    
    int oddIndex = binarySearch( odd, 5, 12);
    cout << "Index of 12 is " << oddIndex << endl ;

    return 0;
}