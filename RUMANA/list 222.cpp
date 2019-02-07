#include<iostream>
#include<list>
using namespace std;

int main()
{
    list<int>mylist;
    list<int>::iterator pos;
    for(int a=0;a<=49;a++)
    {
        int b=a;
        mylist.insert(pos,b);
    }
    for(int a=51;a<=100;a++)
    {
        int c=a;
        mylist.insert(pos,c);
    }


}

