#include<iostream>
#include<list>

// doubly linked list me front or back pointers hote h
// direct access of elements is not possible like in vectors or deque
using namespace std;
int main()
{
    list<int> l;
    l.push_back(1);
    l.push_front(2);
    l.push_front(8);
    l.push_back(4);
    l.push_back(7);

    for(int i:l)
    {
        cout << i << " ";
    }
    cout << endl;

    l.erase(l.begin());
    // l.erase(l.begin(),l.begin()+1);     aisa kuch list me nhi chlta..sirf begin ya end de skte

    l.pop_back();
    l.pop_front();
    for(int i:l)
    {
        cout << i << " ";
    }
    cout << endl;

    cout << "size of list " << l.size() << endl; 

    // copying this list into a new list
    list <int> n(l);
    list <int> z(5,100);    // 5 elements ki list..all elements are 100
    for(int i:z)
    {
        cout << i << " ";
    }
}