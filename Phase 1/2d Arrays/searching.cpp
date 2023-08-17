#include<iostream>
using namespace std;

int isPresent(int arr[3][4] , int row , int col , int target)
{
    for(int i=0 ; i<row ; i++)
    {
        for(int j=0 ; j<col ; j++)
        {
            if(arr[i][j]==target)
            return 1;
        }
    }
    return 0;
}

int main()
{
    int arr[3][4];

    for(int i=0 ; i<3 ; i++)
    {
        for(int j=0 ; j<4 ; j++)
        {
            cin >> arr[i][j];
        }
    }

    for(int i=0 ; i<3 ; i++)
    {
        for(int j=0 ; j<4 ; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    int target;
    cout << "Enter element to be searched : " ;
    cin >> target;
    if(isPresent(arr,3,4,target))
        cout << "Element found" << endl;
    else
        cout << "Element not found" << endl;

}