#include<iostream>
#include<bits/stdc++.h>

using namespace std;

// void intersection( int arr[] , int n , int brr[] , int m )
// {
//     for ( int i=0 ; i<n ; i++ )
//     {
//         int element = arr[i] ;
//         for ( int j=0 ; j<m ; j++ )
//         {
//             if ( element > brr[j] )
//                 break;

//             if( element == brr[j] )
//             {
//                 cout << element << ", ";
//                 brr[j] = INT_MIN ;
//                 break;
//             }
//         }
//     }
//     cout << "NO intersection";
// }

// int main()
// {
//     int arr[5] = { 1,2,3,3,5 };
//     int brr[4] = { 7,2,3,9 };

//     cout << "Intersection of arrays is : ";
//     intersection( arr,5,brr,4 );

//     return 0;
// }



            // OPTIMIZED APPROACH

int main()
{
    int i=0 , j=0 , n , m ;
    int arr[5] = { 1,2,3,3,5 };
    int brr[4] = { 2,2,3,9 };
    cout << "Enter size of 1st array : ";
    cin >> n;
    cout << "Enter size of 2nd array : ";
    cin >> m;

    while ( i<n && j<m )
    {
        if ( arr[i] < brr[j] )
        {
            i++;
        }

        else if ( arr[i] == brr[j] )
        {
            cout << arr[i] << " ";
            i++ ;
            j++ ;
        }

        else 
        {
            j++ ;
        }
    }
    return 0;
}