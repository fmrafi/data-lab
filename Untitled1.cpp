#include<iostream>
#include<list>
using namespace std;
int main ()
{
    list<int>ML;
    list<int>::iterator i;
    list<int>:: iterator j;

    //int f;
    //for(f=0; f<10; f++)



    {
        int temp;
        cin>>temp;
        ML.push_back(temp);


        cout<<"\t"<<endl;
    }

    for(i=ML.begin(); i!=ML.end(); i++)
    {
        cout<<*i<<endl;

    }

    for(i=ML.begin(); i!=ML.end(); i++)

    {
        if(*i==4)
        {
            break;
        }
    }

    for(j=ML.begin(); j!=ML.end(); j++)

    {
        if(*j==7)
        {
            break;
        }
        j++;
    }
        ML.erase(i,j);

        for(j=ML.begin(); j!=ML.end(); j++)
        {
            cout<<*j<<endl;
        }



        return 0;
    }
