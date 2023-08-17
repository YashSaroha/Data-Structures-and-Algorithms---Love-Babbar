// tell which row has the maximum sum and also print the sum 

#include<bits/stdc++.h>
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

    int maxi = INT_MIN;
    int ansIndex = 0;
    for(int i=0 ; i<3 ; i++)
    {
        int ans = 0;
        for(int j=0 ; j<3 ; j++)
        {
            ans = ans + arr[i][j];
        }
        if(ans > maxi)
        {
            maxi = ans;
            ansIndex = i;
        }
    }

    cout << "largest row sum is : " << maxi << endl;
    cout << "this sum is of row number : " << ansIndex << endl;   


}