#include<iostream>
using namespace std;
int main()
{
    int arr[3][3];
    // taking input
    for(int i=0 ; i<3 ; i++)
    {
        for(int j=0 ; j<3 ; j++)
        {
            cin >> arr[i][j];
        }
    }

    // printing array
    for(int i=0 ; i<3 ; i++)
    {
        for(int j=0 ; j<3 ; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    // column wise sum ke liye arr[j][i] likhna hai
    for(int i=0 ; i<3 ; i++)
    {
        int sum = 0;
        for(int j=0 ; j<3 ; j++)
        {
            sum = sum + arr[j][i];
        }
        cout << sum << " ";
    }


}