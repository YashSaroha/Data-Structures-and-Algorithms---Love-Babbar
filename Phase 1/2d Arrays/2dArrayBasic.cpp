#include<iostream>
using namespace std;
int main()
{
    // initializing a 2d Array....3 is number of rows, 4 is no of columns
    int arr[3][4];

    // aise likhke agr niche wale tarike se print kraenge to is array ko 2d array me bna dega
    // int arr[3][4] = {1,11,111,1111,2,22,222,2222,3,33,333,3333};

    // initializing 2d arrays
    // int arr[3][4] = {{1,11,111,1111} , {2,22,222,2222} , {3,33,333,3333}};

    // // taking input -> row wise
    // for(int i=0 ; i<3 ; i++)
    // {
    //     for(int j=0 ; j<4 ; j++)
    //     {
    //         cin >> arr[i][j];
    //     }
    // }

    // taking input -> column wise
    // for(int i=0 ; i<4 ; i++)
    // {
    //     for(int j=0 ; j<3 ; j++)
    //     {
    //         cin >> arr[j][i];
    //     }
    // }

    // printing a 2d array
    for(int i=0 ; i<3 ; i++)
    {
        for(int j=0 ; j<4 ; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

}