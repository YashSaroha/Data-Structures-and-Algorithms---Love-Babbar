#include<iostream>
using namespace std;

//   METHOD 1

            // void printArray(int arr[] , int n)
            // {
            //     for ( int i=0 ; i<n ; i++ )
            //         cout << arr[i] << " ";
            //     cout << endl;
            // }

            // void reverse ( int arr[] , int n )
            // {
            //     int start = 0;
            //     int end = n-1 ;
            //     while ( start <= end ){
            //         swap( arr[start] , arr[end] );
            //         start++ ;
            //         end-- ;
            //     }
            // }

            // int main()
            // {
            //     int arr[6] = { 1,2,3,4,5,6 };
            //     int brr[5] = { 3,-9,5,8,2 };

            //     reverse(arr,6);
            //     reverse(brr,5);

            //     printArray(arr,6);
            //     printArray(brr,5);
            // }



//   METHOD 2

            // int main()
            // {
            //     int size;
            //     cout << "Enter the size : ";
            //     cin >> size;

            //     int arr[5] ;
            //     cout << "Enter the array \n";
            //     for ( int i=0 ; i<size ; i++ )
            //     {
            //         cin >> arr[i];
            //     }

            //     cout << "Reverse of the above array is \n";
            //     for ( int i=size-1 ; i>=0 ; i-- )
            //     {
            //         cout << arr[i] << " ";
            //     }

            //     return 0;
            // }