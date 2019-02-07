#include<iostream>
using namespace std;

struct Node{
    double value;
    Node *N,*P;
    Node(double y){
        value = y;
        N = P = NULL;
    }
};

class doubleLinkedList
{
    Node *front;
    Node *back;
public:
    doubleLinkedList(){
        front = NULL;
        back = NULL;
    }

    ~doubleLinkedList(){
        destroyList();
    }
    void push_front(double x);
    void push_back(double x);
    void dispNodesForward();
    void destroyList();
};

void doubleLinkedList::push_front(double x){
    Node *n = new Node(x);
    if( front == NULL){
        front = n;
        back = n;
    }
    else{
        front->P = n;
        n->N = front;
        front = n;
    }
}

void doubleLinkedList::push_back(double x)
{
    Node *n = new Node(x);
    if( back == NULL)
    {
        front = n;
        back = n;
    }
    else
    {
        back->N = n;
        n->P = back;
        back = n;
    }
}

void doubleLinkedList::dispNodesForward()
{
    Node *temp = front;
    cout << "\n\nNodes in forward order:" << endl;
    while(temp != NULL)
    {
        cout << temp->value << "   " ;
        temp = temp->N;
    }
}

void doubleLinkedList::destroyList()
{
    Node *T = back;
    while(T != NULL)
    {
        Node *T2 = T;
        T = T->P;
        delete T2;
    }
    front = NULL;
    back = NULL;
}



int main()
{
    doubleLinkedList *list = new doubleLinkedList();
    list->push_front(1.1);
    list->dispNodesForward();
    return 0;
}
