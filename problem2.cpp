#include<iostream>
#include<stack>
//#include<string>
using namespace std;
int main()
{

    stack<char>MS;
    int i;
    string s;
    cout<<"Enter String:";
    //getline(cin,s);
    cin>>s;
    for(i=0;i<s.size();i++)
    {
        if(s[i]=='(')
        {
            MS.push(s.at(i));
        }
        else
        {
            if(MS.size()==0)
            {
                cout<<"Invalid Input";
                break;
            }
            else
                MS.pop();
        }
    }
    if(i==s.size())
    {
        if(MS.size()>0)
        {
           cout<<"Invalid";
        }

        else
            cout<<"Valid";
    }
    return 0;
}
