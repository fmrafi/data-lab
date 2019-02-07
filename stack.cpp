#include<iostream>
#include<stack>
using namespace std;

int main()
{
    stack<int>ms;

    int a,i;

    cout<<"Enter 5 element.."<<endl;
    for(i=0; i<5; i++){
        cout<<i+1<<"st element: ";
        cin>>a;
        ms.push(a);
    }

    for(i=ms.size(); i>0; i--){
        cout<<ms.top();
        ms.pop();
    }

    return 0;
}
