#include<bits/stdc++.h>
using namespace std;

/*

    Following is the linked list node structure.

    template <typename T>
    class Node {
        public:
        T data;
        Node* next;

        Node(T data) {
            next = NULL;
            this->data = data;
        }

        ~Node() {
            if (next != NULL) {
                delete next;
            }
        }
    };

*/

// first and second are heads of two sorted linked lists

template <typename T>
class Node
{
    public:
    T data;
    Node* next;

    Node(T data)
    {
        next = NULL;
        this->data = data;
    }

    ~Node()
    {
        if (next != NULL)
        {
            delete next;
        }
    }
};

Node<int>* sortTwoLists(Node<int>* first, Node<int>* second)
{
    if(first==NULL){return second;}
    else if(second==NULL){return first;}

    Node<int>* head=NULL;Node<int>* tail=NULL;
    if(first->data<second->data){head=first;tail=first;first=first->next;}
    else{head=second;tail=second;second=second->next;}

    while(first!=NULL&&second!=NULL)
    {
        if(first->data<second->data)
        {
            tail->next=first;
            tail=tail->next;
            first=first->next;
        }
        else
        {
            tail->next=second;
            tail=tail->next;
            second=second->next;
        }
    }

    while(first!=NULL)
    {
        tail->next=first;
        tail=tail->next;
        first=first->next;
    }

    while(second!=NULL)
    {
        tail->next=second;
        tail=tail->next;
        second=second->next;
    }

    return head;
}

disp(Node<int>* head)
{
    cout<<endl;int i=0;
    while(head!=NULL){i++;cout<<head->data<<"  ";head=head->next;}
    cout<<endl<<"size = "<<i;
    cout<<endl;
}

int main()
{
    Node<int>* first=NULL;Node<int>* temp=NULL;
    int x=0,y=0;
    for(int i=0;i<17;i++)
    {
        x=rand()%20+1+y;
        Node<int>* element=new Node<int>(x);
        if(first==NULL){first=element;temp=element;}
        else{temp->next=element;temp=temp->next;}
        y=x;
    }
    disp(first);

    Node<int>* second=NULL;temp=NULL;
    x=0;y=0;
    for(int i=0;i<28;i++)
    {
        x=rand()%21+1+y;
        Node<int>* element=new Node<int>(x);
        if(second==NULL){second=element;temp=element;}
        else{temp->next=element;temp=temp->next;}
        y=x;
    }
    disp(second);

    Node<int>* head=sortTwoLists(first,second);
    disp(head);

    return 0;
}

