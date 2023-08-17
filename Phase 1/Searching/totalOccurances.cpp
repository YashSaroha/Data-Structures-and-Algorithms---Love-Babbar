// Formula for total occurances of any number in an array is
//    Total occurance = (rightOccurance - leftOccurance) + 1

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
    int arr[8] = { 0,0,1,2,2,2,2,2 };
    int leftOccr = left_occurance(arr, 8, 2);
    int rightOccr = right_occurance(arr, 8, 2);
    cout << "Left occurance of 2 is at index " << left_occurance(arr, 8, 2) << endl ;
    cout << "Right occurance of 2 is at index " << right_occurance(arr, 8, 2) << endl ;
    cout << "Total occurance of 2 is " << (rightOccr - leftOccr) + 1 << endl;

    return 0;
}