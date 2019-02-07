#include<string>
#include<iostream>
#include<stack>
#include<cstdio>
#define strlen
using namespace std;
int main()
{
    bool invalid=false;
    stack<char>ob;
    int n,i;
   char a[1000];
    cout<<"enter Element::"<<endl;
    cin>>a;
     cout<<"your entered::"<<a<<endl;

   for(i=0;i<strlen(a);i++)
   {
     if(a[i]=='(')
     {
        ob.push(a[i]);
     }
     else{
        if(ob.empty())
            invalid==true;
        else
            ob.pop();
     }

   }

   if(invalid==false)
   {
       if(ob.size()==0)
    cout<<"Stack is empty,valid";
   else cout<<"Stack is not empty,invalid";
   }
   else cout<<"invalid";
    return 0;
}
