#include<iostream>
#include<list>
using namespace std;

int main()
{
    list<int>name;
    list<int>::iterator pos,pos1;
     pos=name.begin();
    for(int a=0;a<=5;a++)
    {
    int b=a;
    name.insert(pos,b);
    }

    for(int a=10;a<=15;a++)
        {
            int c=a;
           name.insert(pos,c);

        }
        pos=name.begin();
        for(int a=0;a<name.size();a++)
        {
            cout<<*pos<<endl;
            pos++;
        }
        for(pos1=name.begin(); pos1!=name.end();pos1++)
        {
            if(*pos1==5)
                break;


        }
        pos1++;
        for(int a=6;a<=9;a++)
        {
            int e=a;
            name.insert(pos1,e);
        }

          pos=name.begin();
        for(int a=0;a<name.size();a++)
        {
            cout<<*pos<<endl;
            pos++;

        }



}
