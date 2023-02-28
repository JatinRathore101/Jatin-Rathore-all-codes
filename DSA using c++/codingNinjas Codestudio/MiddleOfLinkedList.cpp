#include<bits/stdc++.h>
using namespace std;

class Node
{
    public:
    int data;
    Node *next;
    Node(int data)
    {
        this->data = data;
        this->next = NULL;
    }
};

Node *findMiddle(Node *head)
{
    if(head->next==NULL){return head;}
    Node* slow=head;Node* fast=head;

    while(fast!=NULL&&fast->next!=NULL)
    {
        slow=slow->next;
        fast=fast->next->next;
    }
    return slow;
}

int main()
{
    Node* head=NULL;
    Node* tail=NULL;
    int n=10,x=0;
    for(int i=0;i<n;i++)
    {
        x+=rand()%23+1;
        Node* element=new Node(x);
        cout<<x<<"  ";
        if(head==NULL){head=element;tail=element;}
        else{tail->next=element;tail=tail->next;}
    }cout<<endl;

    Node* res=findMiddle(head);
    cout<<"->  "<<res->data;

    return 0;
}

