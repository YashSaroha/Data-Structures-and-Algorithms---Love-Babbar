#include<iostream>
using namespace std;


void unique( int arr[] , int n )
{
    for ( int i=0 ; i<n ; i++ )
    {
        bool matchFound = false;
        for ( int j=0 ; j<n ; j++ )
        {
            if ( arr[i] == arr[j] && i != j )
                matchFound = true;
        }
        if (matchFound == false)
            cout << arr[i] << endl;
    }
}

int main()
{
    int arr[6] = { 1,2,4,3,4,3 };
    int n;
    cout << "Enter size : ";
    cin >> n;

    unique(arr,n);

    return 0;
}