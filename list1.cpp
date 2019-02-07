#include<iostream>
#include<list>
using namespace std;
int main()
{
    list<int>::iterator itr1,itr2;
    list<int>mylist;
    for(int i=1;i<=5;i++)

        mylist.push_back(i);

    for(int i=10;i<=14;i++)

        mylist.push_back(i);

    for(itr1=mylist.begin();itr1!=mylist.end();itr1++)
    {
        if(*itr1==10)
            break;
    }
    for(int i=6; i<=9;i++)

        mylist.insert(itr1,i);

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
