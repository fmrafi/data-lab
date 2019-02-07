#include<iostream>
using namespace std;
char stck[80];
int sttop=-1;
char top()
{
    return stck[sttop];
}
bool empty()
{
    if(sttop==-1)
        return true;
    else return false;
}
void push(char c)
{
    stck [sttop+1]=c;
    sttop++;
}
void pop()
{
    sttop--;
}
int size()
{
    return sttop+1;
}


int main()
{

    push('a');
     push('b');
      push('c');
      cout<<top();
      pop();
      cout<<endl;
 cout<<top();
      pop();
      cout<<endl;
      cout<<size()<<endl;
      if(!empty())
        cout<<top();
    return 0;
}

