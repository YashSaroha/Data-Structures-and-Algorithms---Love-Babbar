// SELECTION SORT
// in selection sort, we place the minimum value of array at the correct position

#include<iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i=0 ; i<n ; i++)
    {
        cin >> arr[i];
    }

    for (int i=0 ; i<n-1 ; i++)
    {
        for (int j=i+1 ; j<n ; j++)
        {
            if (arr[j] < arr[i])
                swap(arr[i],arr[j]);
        }
    }

    for (int i=0 ; i<n ; i++)
    {
        cout << arr[i] << " ";
    }
}

// 4 2 1 6 8
// round 1
// 2 4 1 6 8
// 1 4 2 6 8
// round 2
// 1 2 4 6 8
// round 3
// 