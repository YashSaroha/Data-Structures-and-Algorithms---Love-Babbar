#include<iostream>
using namespace std;

int main()
{
    char a;
    cout << "Enter any digit : " << endl;
    cin >> a;

    if (a>47 && a<58)
        cout << "Entered digit is '" << a << "' which is a number";
    else if ( a>64 && a<91 )
        cout << "Entered digit is '" << a << "' which is an uppercase letter";
    else if ( a>96 && a<123 )
        cout << "Entered digit is '" << a << "' which is a lowercase letter";
    else
        cout << "Entered digit is '" << a << "' which is a special character";

    return 0;
}

