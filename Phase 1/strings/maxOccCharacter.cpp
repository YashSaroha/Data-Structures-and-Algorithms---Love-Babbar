// Find the maximum occuring character of a string
// e.g string = output......max occuring character = t

#include<iostream>
using namespace std;

char maxOccCharacter( string s) {
    // count array for each alphabet
    int count[26] = {0};
    for(int i=0 ; i<26 ; i++)
    {
        int n = 0;
        if(s[i] >= 'a' && s[i] <= 'z') {
            // lowercase
            n = s[i] - 'a';
        }
        else {
            // uppercase
            n = s[i] - 'A';
        }
        count[n]++ ;
    }
    for(int i=0 ; i<26 ; i++)
    cout << count[i] << " " ;

    int min = -1;
    int ans = 0;
    for(int i=0 ; i<26 ; i++)
    {
        if(count[i] > min)
        {
            ans = i;
            min = count[i];
        }
    }
    return 'a' + ans;
}

int main()
{
    string s;
    cin >> s;
    cout << endl;
    cout << maxOccCharacter << endl;
}