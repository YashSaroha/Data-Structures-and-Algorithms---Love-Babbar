#include<iostream>
using namespace std;

bool search ( int arr[] , int size , int key )
{
    for ( int i=0 ; i<size ; i++ )
    {
        if ( arr[i] == key ){
            return 1;
        }
    }
    return 0;
}

int main()
{
    int arr[8] = { 1,3,5,-3,6,3,9,12 };
    int key;
    cout << "Enter the key : ";
    cin >> key ;

    bool found = search (arr , 8 , key);
    if ( found )
        cout << "key is present";
    else 
        cout << "key is absent";

    return 0;

}