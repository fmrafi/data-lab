#include<iostream>
#include<list>
#include<queue>
using namespace std;
class QLL
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
    QLL ob;
    ob.push(1);
    ob.push(2);
    ob.push(3);
    ob.push(4);
    cout<<"top:"<<top;
    return 0;
}
