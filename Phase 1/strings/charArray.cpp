#include<bits/stdc++.h>
using namespace std;
int main()
{
    // char a = 'y';
    // cout << a << endl;

    // // character array of size 10
    // char ch[10] = {'y','a','s','h'};
    // cout << ch << endl;
    // character array ke end me hmesha null character \0 store hota hai jo uska end show krta hai

    // taking character array as input
    // char firstName[20];
    // cin >> firstName;
    // cout << firstName << endl;  // if it consists of more than one word then only first word will be printed

    // firstName[2] = '\0';        // firstName ke 2nd index pr null character daal diya to print sirf null character tk hoga i.e 2 letters
    // cout << firstName << endl;




    // length of character array
    char name[20];
    cin >> name;
    int count = 0;
    for(int i=0 ; name[i]!='\0' ; i++)
        count++;
    cout << "length of " << name << " is " << count << endl;




    // reverse a character array
    int s = 0;
    int e = count-1;
    for(int i=s ; i<=e ; i++)
    {
        swap(name[s++],name[e--]);
    }
    cout << "reversed array is " << name << endl;    

}