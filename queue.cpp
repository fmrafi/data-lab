#include<iostream>
#include<queue>
#include<string>
using namespace std;
int main()
{
    queue<char>q;
    int i,n;
    cin>>n;
    for(i=0;i<n;i++)
    {
        int temp;
        cin>>temp;
        q.push(temp);
        q.pop();
        q.pop();
        q.pop();
    }
    cout<<"Front:"<<q.front();
    cout<<"Rear:"<<q.back();

}
