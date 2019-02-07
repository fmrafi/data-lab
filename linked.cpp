#include<iostream>

using namespace std;

int main()

{

    int arra[10];

    int *i;


    arra[5]=6;
    arra[2]=1;


    for(i=&arra[0];i!=&arra[9];i++)
    {
        cout<<*i<<endl;
    }
     for(i=&arra[0];i!=&arra[9];i++)
    {

        if(*i==6)

        {
            cout<<"Found address:"<<i;
        }
    }

    return 0;
}
