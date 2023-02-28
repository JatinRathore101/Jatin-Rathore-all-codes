#include<bits/stdc++.h>
using namespace std;

struct Node
{
    int data;
    Node *next;
    Node *arb;

    Node(int x)
    {
        data = x;
        next = NULL;
        arb = NULL;
    }
};

void disp(Node* head)
{
    cout<<endl;int i=0;
    while(head!=NULL)
    {
        i++;
        cout<<head->data<<"  ";head=head->next;
    }
    cout<<endl<<"size = "<<i<<endl;
}

Node *copyList(Node *head)
{
    if(head==NULL||head->next==NULL){return head;}
    Node* temp=head;
    while(temp!=NULL)
    {
        Node* element=new Node(temp->data);
        element->next=temp->next;
        temp->next=element;
        temp=element->next;
    }

    temp=head;
    while(temp!=NULL)
    {
        if(temp->arb==NULL)
        {
            temp->next->arb=NULL;
        }
        else
        {
            temp->next->arb=temp->arb->next;
        }
        temp=temp->next->next;
    }

    int i=0;temp=head;
    Node* head1=NULL;Node* tail1=NULL;
    Node* head2=NULL;Node* tail2=NULL;
    while(temp!=NULL)
    {
        Node* element=temp;
        temp=temp->next;
        element->next=NULL;
        if(i%2==0)
        {
            if(head1==NULL){head1=element;tail1=element;}
            else{tail1->next=element;tail1=tail1->next;}
        }
        else
        {
            if(head2==NULL){head2=element;tail2=element;}
            else{tail2->next=element;tail2=tail2->next;}
        }
        i++;
    }

    head=head1;

    return head2;
}

int main()
{
    int i=1,n=10;

    Node* head=NULL;Node* tail=NULL;

    while(i<=n)
    {
        Node* element=new Node(i);i++;
        if(head==NULL){head=element;tail=element;}
        else{tail->next=element;tail=tail->next;}
    }

    disp(head);
    Node* head2=copyList(head);
    disp(head2);

    return 0;
}
