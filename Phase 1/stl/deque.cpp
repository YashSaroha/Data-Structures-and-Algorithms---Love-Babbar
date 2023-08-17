#include<iostream>
#include<deque>
using namespace std;

int main()
{
    // including its library <deque>
    // insertion and deletion can occur at both front and back

    deque<int> d;

    // inserting elements
    d.push_back(1);
    d.push_front(2);
    d.push_back(8);
    d.push_front(9);

    // printing the deque
    for (int i:d)
    {
        cout << i << " ";
    }
    cout << endl;

    // deleting elements
    // d.pop_back();
    // d.pop_front();
    // for (int i:d)
    // {
    //     cout << i << " ";
    // }
    // cout << endl;


    // accessing elements
    cout << "0 index element : " << d.at(0) << endl;
    cout << "front element : " << d.front() << endl;
    cout << "back element : " << d.back() << endl;
    cout << "is deque empty : " << d.empty() << endl;
    cout << "size of deque before erase : " << d.size() << endl;

    // deleting elements in bulk
    d.erase(d.begin() , d.begin()+1);   // first element delete
    cout << "size of deque after erase : " << d.size() << endl;

    // size becomes 0 after erasing but maxsize of deque remains same 


}