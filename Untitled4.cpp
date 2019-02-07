#include<iostream>
#include<stack>
using namespace std;
int main()
{
int n,i;

    stack<int >MIS;
    cout<<"How many numbers you wanna input=";
    cin>>n;
    cout<<"\n Enter"<<n<<"Number:\n";
    while(MIS.size()<n)
    {
        int temp;
        cin>>temp;
        MIS.push(temp);

    }
    n++;
    while(MIS.size()<n)
    {
        cout<<"Top="<<MIS.top()<<endl;
        MIS.pop();
    }
    n++;

    return 0;
}


