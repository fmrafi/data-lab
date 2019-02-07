#include<iostream>
#include<queue>
using namespace std;
int main()
{
    int i,n,k;
    queue<int>q;
    cin>>n;
    for(i=0;i<n;i++)
    {
      q.push(i);
    }
    cin>>k;
    while(q.size()!=1)
    {
        for(i=0;i<k-1;i++)
        {
            q.push(q.front());
            q.pop();
        }
        q.pop();
    }

    cout<<"Front:"<<q.front();
    return 0;
}
