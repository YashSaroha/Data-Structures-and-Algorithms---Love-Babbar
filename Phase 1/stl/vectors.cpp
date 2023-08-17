#include<iostream>
#include<vector>

using namespace std;

int main()
{

    // first include its library which is <vector>
    vector<int> v;
    cout << "Capacity is -> " << v.capacity() << endl;
    // capacity tells the total elements it can accomodate
    v.push_back(1) ;
    cout << "Capacity is -> " << v.capacity() << endl;
    v.push_back(2) ;
    cout << "Capacity is -> " << v.capacity() << endl;
    v.push_back(3) ;
    cout << "Capacity is -> " << v.capacity() << endl;
    // size tells the elements currently present in it
    cout << "Size is -> " << v.size() << endl;
    cout << "Element at any index, say 2 -> " << v.at(2) << endl;
    cout << "Front element is -> " << v.front() << endl;
    cout << "Last element is -> " << v.back() << endl;

    // printing the vector
    for(int i:v)
    {
        cout << i << " ";
    }
    cout << endl;

    // removing last element of vector
    v.pop_back() ;
    cout << "After popping" << endl;
    for (int i:v)
    {
        cout << i << " ";
    }
    cout << endl;

    cout << "Size before clearing " << v.size() << endl;
    cout << "Capacity before clearing " << v.capacity() << endl;
    v.clear();
    cout << "Size after clearing " << v.size() << endl;
    cout << "Capacity after clearing " << v.capacity() << endl;
    // when we clear, capacity remains same and size becomes 0

    vector<int> vec(5,1);
    // this means 5 size ka vector initialized with 1 i.e all elements 1
    for (int i:vec)
    {
        cout << i << " ";
    }
    cout << endl;

    // creating a vector with elements of vector vec
    vector<int> yash(vec);
    for (int i:yash)
    {
        cout << i << " ";
    }
    cout << endl;

}