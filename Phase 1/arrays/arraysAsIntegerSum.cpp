// given two arrays [1,2,3] & [6] , ans should be 123+6 = [1,2,9]
// lecture 21

#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> a = {1,2,3};
    vector<int> b = {6,2};
    vector<int> ans;
    
    int i = a.size()-1;
    int j = b.size()-1;
    int carry = 0;

    while(i>=0 && j>=0)
    {
        int sum = a[i] + b[j] + carry;
        carry = sum / 10;
        sum = sum % 10;
        ans.push_back(sum);
        i--;
        j--;
    }

    // first case : if array b is small than array a
    while( i>=0 )
    {
        int sum = a[i] + carry;
        carry = sum / 10;
        sum = sum % 10;
        ans.push_back(sum);
        i--;
    }

    // second case : if array a is small than array b
    while( j>=0 )
    {
        int sum = b[j] + carry;
        carry = sum / 10;
        sum = sum % 10;
        ans.push_back(sum);
        j--;
    }

    // third case : if a and b size is same where adding last elements requires addition of carry
    while(carry != 0)
    {
        int sum = carry;
        carry = sum / 10;
        sum = sum % 10;
        ans.push_back(sum);
    }

    reverse(ans.begin() , ans.end());
    for(int i:ans)
    cout << i << " ";

    
}