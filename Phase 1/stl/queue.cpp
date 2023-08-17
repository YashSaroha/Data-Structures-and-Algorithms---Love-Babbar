#include<iostream>
#include<queue>

using namespace std;
int main()
{
    queue<string> q;

    q.push("yash");
    q.push("saroha");
    q.push("hello");

    // printing first element of queue
    cout << "first element is : " << q.front() << endl;
    cout << "size after pop : " << q.size() << endl;

    q.pop();
    cout << "first element after popping : " << q.front() << endl;
    cout << "size after pop : " << q.size() << endl;

}   