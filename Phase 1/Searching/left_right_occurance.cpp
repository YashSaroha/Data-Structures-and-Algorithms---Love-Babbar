#include<iostream>
using namespace std;

int left_occurance( int arr[] , int size , int key )
{
    int left = -1;
    int start = 0;
    int end = size - 1;
    int mid = start + ( end-start )/2;

    while (start<=end)
    {
        if ( arr[mid] == key )
        {
            left = mid ;
            end = mid - 1 ;
        }

        else if ( key > arr[mid] )
            start = mid + 1 ;

        else
            end = mid - 1 ;

        mid = start + ( end-start )/2;
    }
    return left;
}

int right_occurance( int arr[] , int size , int key )
{
    int right = -1;
    int start = 0;
    int end = size - 1;
    int mid = start + ( end-start )/2;

    while (start<=end)
    {
        if ( arr[mid] == key )
        {
            right = mid ;
            start = mid + 1 ;
        }

        else if ( key > arr[mid] )
            start = mid + 1 ;

        else
            end = mid - 1 ;

        mid = start + ( end-start )/2;
    }
    return right ;
}

int main()
{
    int arr[8] = { 0,0,1,1,2,2,2,2 };
    cout << "Left occurance of 2 is at index " << left_occurance(arr, 8, 2) << endl ;
    cout << "Right occurance of 2 is at index " << right_occurance(arr, 8, 2) << endl ;

    return 0;
}

        // CODE TO FIND LEFTMOST AND RIGHTMOST VALUES IN UNSORTED ARRAY

// for (int i=1 ; i<n ; i++)
//     {
//         if( arr[i] > max && arr[i] > arr[leftMax])
//             leftMax = i;
//         if (arr[i] <= min && arr[i] <= arr[rightMin])
//             rightMin = i;
//     }

// these are only for leftmost occurance of max element of arrray and rightmost occurance of min element of array
// can be done for rightmost max and leftmost min 