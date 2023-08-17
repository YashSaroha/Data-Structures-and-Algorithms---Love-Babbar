// 1 2 3  isko wave pattern me print krna hai ie 1 4 7 8 5 2 3 6 9
// 4 5 6
// 7 8 9

#include<iostream>
using namespace std;
int main()
{
    int arr[3][3];
    for(int i=0 ; i<3 ; i++)
    {
        for(int j=0 ; j<3 ; j++)
        {
            cin >> arr[i][j];
        }
    }

    for(int col=0 ; col<3 ; col++)
    {
        if(col%2 == 0)
        {
            for(int row=0 ; row<3 ; row++)
            cout << arr[row][col] << " ";
        }
        else      
        {
            for(int row=2 ; row>=0 ; row--)
            cout << arr[row][col] << " ";  
        }
    }


}