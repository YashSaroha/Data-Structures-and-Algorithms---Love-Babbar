// BUBBLE SORT
// array ke largest element ko right place pr rkh denge hr loop me

// best case = O(n)
// worst case = O(n^2)

#include<iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    bool swapped = false;
    int arr[n];
    for (int i=0 ; i<n ; i++)
    {
        cin >> arr[i];
    }

    for (int j=1 ; j<n ; j++)
    {
        // for rounds = n-1
        for (int i=0 ; i<n-j ; i++)
        {
            if (arr[i] > arr[i+1])
            {
                swap (arr[i],arr[i+1]);
                swapped = true;
            }
        }
        if(swapped = false)
        {
            break;
           // it means array is already sorted...koi element b swap ni hua to hm 
           // i wale loop se bahar aa jaenge..mtlb sirf ek loop me ans aagya
           // it means time complexity is now O(n), not O(n^2)
           // now code is optimized as best case is included
        }
    }

    // sorting over
    for (int i=0 ; i<n ; i++)
    {
        cout << arr[i] << " ";
    }
}

// 10  1 7 6 14 9
// round 1
// 1 10 7 6 14 9
// 1 7 10 6 14 9
// 1 7 6 10 14 9
// 1 7 6 10 9 14

// round 2
// 1 7 6 10 9 14
// 1 6 7 10 9 14
// 1 6 7 10 9 14
// 1 6 7 9 10 14

// round 3
// 1 6 7 9 10 14
// 1 6 7 9 10 14
// 1 6 7 9 10 14

// round 4
// 1 6 7 9 10 14
// 1 6 7 9 10 14

// round 5
// 1 6 7 9 10 14


