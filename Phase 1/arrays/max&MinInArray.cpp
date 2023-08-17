#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int getMax ( int num[] , int n )
{
    int max = INT_MIN;
    for (int i=0 ; i<n ; i++)
    {
        if (num[i] > max)
            max = num[i];

        // max = max( max,num[i])   maximum of both numbers will be returned
    }
    return max;
}

int getMin ( int num[] , int n )
{
    int min = INT_MAX;
    for (int i=0 ; i<n ; i++)
    {
        if (num[i] < min)
            min = num[i];

        // min = min( min,num[i])   minimum of both numbers will be returned
        
    }
    return min;
}


int main()
{
    int size;
    cout << "Enter size : ";
    cin >> size ;
    int num[100];
    cout << "Enter array : ";

    for ( int i=0 ; i<size ; i++ )
    {
        cin >> num[i];
    }

    cout << "Maximum value is " << getMax(num,size) << endl;
    cout << "Minimum value is " << getMin(num,size) << endl;
    
    return 0;
}
