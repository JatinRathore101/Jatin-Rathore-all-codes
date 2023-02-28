#include<bits/stdc++.h>
using namespace std;

// code is working fine in gfg window, can't find why not working on my pc

struct Node
{
  int data;
  struct Node *next;

  Node(int x){
      data = x;
      next = NULL;
  }
};

void disp(Node* head)
{
    if(head==NULL){cout<<endl<<"size = 0"<<endl;return;}
    else if(head->next==head||head->next==NULL)
    {cout<<endl<<head->data;cout<<endl<<"size = 1"<<endl;return;}

    Node* temp=head->next;
    cout<<endl<<head->data;
    int i=1;
    while(temp!=head&&temp!=NULL)
    {
        cout<<"  "<<temp->data;temp=temp->next;
        i++;
    }
    cout<<endl<<"size = "<<i<<endl;
}

void splitList(Node *head, Node **head1_ref, Node **head2_ref)
{
    if(head==NULL){return;}
    else if(head->next==head)
    {*head1_ref=head;return;}

    Node* slow=head;Node* fast=head;
    while(fast->next!=head&&fast->next->next!=head)
    {
        slow=slow->next;
        fast=fast->next->next;
    }if(fast->next!=head){fast=fast->next;}
    *head1_ref=head;
    *head2_ref=slow->next;
    fast->next=slow->next;
    slow->next=head;

    return;
}


int main()
{
    Node* head=NULL;Node* tail=NULL;
    int i=1,n=2;
    while(i<=n)
    {
        Node* element=new Node(i);i++;
        if(head==NULL){head=element;tail=element;}
        else{tail->next=element;tail=tail->next;}
    }
    tail->next=head;
    disp(head);

    Node **head1_ref=NULL;Node **head2_ref=NULL;
    splitList(head,head1_ref,head2_ref);
    disp(*head1_ref);
    disp(*head2_ref);

    return 0;
}

