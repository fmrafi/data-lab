#include<iostream>
using namespace std;
class STACK{
public:
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


};

int main()
{

   STACK ob;
   ob.push('a');

     ob.push('b');
      ob.push('c');
        cout<<ob.top();
      ob.pop();
      cout<<endl;
 cout<<ob.top();
      ob.pop();
      cout<<endl;
      cout<<ob.size()<<endl;
      if(!ob.empty())
        cout<<ob.top();

    return 0;
}

