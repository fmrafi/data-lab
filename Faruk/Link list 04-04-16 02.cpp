#include<iostream>
#include<list>
using namespace std;
int main()
{
    list<int>mylist;
    list<int>::iterator itr1,itr2;
    mylist.push_back(10);
    mylist.push_back(9);
    mylist.push_back(8);
    mylist.push_back(7);
    for(int i=11;i<=14;i++)
    {
        mylist.push_back(i);
    }
    for(itr1=mylist.begin();itr1!=mylist.end();itr1++)
    {
        if(*itr1==11)
            break;
    }
    for(int i=7;i<=5;i--)
    {
        mylist.insert(itr1,i);
    }
    for(itr2=mylist.begin();itr2!=mylist.end();itr2++)
    {
        if(*itr2==11)
            break;
    }
    itr2++;
    mylist.erase(itr1,itr2);
    for(itr1=mylist.begin();itr1!=mylist.end();itr1++)
        cout<<*itr1<<endl;
    return 0;
}
