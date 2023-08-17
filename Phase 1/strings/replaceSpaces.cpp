// replace all the spaces in the string with @40
// eg ->  my name is yash  ->  my@40name@40is@40yash

#include<iostream>
using namespace std;

int main()
{
    string s = "my name is yash";
    string temp;
    for(int i=0 ; i<s.size() ; i++)
    {
        if(s[i] == ' ')
        {
            temp.push_back('@');
            temp.push_back('4');
            temp.push_back('0');
        }
        else
        {
            temp.push_back(s[i]);
        }
    }
    cout << temp;

}