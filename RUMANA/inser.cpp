#include<iostream>
#include<list>
using namespace std;
int main()
{
    list<int>M;
    int n,f;
    list<int>::iterator i;
    list<int>::iterator j;
    cout<<"\n\n\tEnter the number of element:";
    cin>>n;
    for(f=0;f<n;f++)
    {
        int temp;
        cin>>temp;
        M.push_back(temp);
    }
    for(i=M.begin();i!=M.end();i++)
    {
       if(*i==4)
            break;
    }
    for(j=M.begin();j!=M.end();j++)
    {
        if(*j==7)
            break;
    }
    j++;
    M.erase(i,j);
    for(j=M.begin();j!=M.end();j++)
    {
        cout<<*j<<endl;
    }
    return 0;
}

