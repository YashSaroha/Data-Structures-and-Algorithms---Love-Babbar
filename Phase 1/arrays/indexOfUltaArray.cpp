// array is given of length n. Print another array consisting of the location/index 
// of each element of first array. 
// example - 2 3 4 1
// 1 is at index 4, 2 is at index 1, 3 is at 2, 4 is at 3 
// so print 4 1 2 3

#include <bits/stdc++.h>
using namespace std;


int main() 
{

    int n;
    cin >> n;
    int a[n];
    for (int i=1 ; i<=n ; i++)
    {
        cin >> a[i];
    }
    
    // returning the index of each element of a[i]
    int b[n];
    for (int i=1 ; i<=n ; i++)
    {
        b[a[i]] = i;
    }
    
    for (int i=1 ; i<=n ; i++)
    {
        cout << b[i] << " ";
    }
}
