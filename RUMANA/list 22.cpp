#include<iostream>
#include<list>
using namespace std;
int main()
{
    list<int>mylist;
    list<int>::iterator myitr;

    int i;
    for(i=0;i<6;i++)
    {
      //  mylist.insert(mylist.end(),(i));

    }
 for(i=0;i<=15;i++)
   {
       mylist.insert(mylist.end(),(i));
    }
    for(myitr=mylist.begin();myitr!=mylist.end();myitr++)
    {
        if(*myitr==10)
            break;
    }
    //for(i=10;i<16;i++)
   // {
     //  mylist.insert(myitr,i);

    //}
    for(myitr=mylist.begin();myitr!=mylist.end();myitr++)
        cout<<*myitr<<endl;
}
