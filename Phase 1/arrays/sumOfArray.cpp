#include<iostream>
using namespace std;

int sumOfArr (int arr[] , int n)
{
    int ans = 0;
    for (int i=0 ; i<n ; i++)
    {
        ans = ans + arr[i];
    }
    return ans;
}

int main()
{
    int size;
    int arr[100];
    cout << "Enter the size : ";
    cin >> size ;
    cout << "Enter the array :\n";

    for ( int i=0 ; i<size ; i++)
    {
        cin >> arr[i];
    }

    int result = sumOfArr(arr,size);
    cout << "Sum of array is : " << result ;

    return 0;
}