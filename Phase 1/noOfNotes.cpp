#include<iostream>
using namespace std;
int main()
{   
    int n = 1330 ;
    int note;
    cout << "Enter the note : ";
    cin >> note;

        switch (note)
        {
        case 100:
            cout << "No of hundred notes are : " << n/100 << endl ;
        
        case 50:
            cout << "No of fifty notes are : " << (n%100)/50 << endl ;

        case 20:
            cout << "No of twenty notes are : " << (n%50)/20 << endl ;

        case 1:
            cout << "No of ones notes are : " << (n%20) << endl ;
            break ;

        default:
            cout << "Enter a valid note";
            break;
        }

    return 0;
}