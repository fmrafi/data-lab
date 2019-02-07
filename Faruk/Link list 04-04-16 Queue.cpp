#include<iostream>
#include<list>
using namespace std;
class LL
{
    list<int>mylist;

    void push(int x)
    {
        mylist.push_back(x);
    }
    void pop()
    {
        mylist.pop_front();
    }
    int front()
    {
        return mylist.front();
    }
    int back()
    {
        return mylist.back();
    }
};
int main()
{
    LL ob;
    ob.push(1);
    ob.push(2);
    ob.push(3);
    ob.push(4);
    cout<<"Front:"<<ob.front();
    ob.pop();
    cout<<"Front:"<<ob.front();
    return 0;
}
