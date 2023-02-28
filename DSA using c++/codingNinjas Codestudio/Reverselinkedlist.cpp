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

Node* reverseLinkedList_recursion(Node *head)
{
    if(head==NULL||head->next==NULL){return head;}

    Node* temp=head->next;
    head->next=NULL;
    Node* temp2=reverseLinkedList_recursion(temp);

    temp->next=head;

    return temp2;
}

Node* reverseLinkedList(Node *head)
{
    if(head==NULL||head->next==NULL){return head;}
    Node* head2;
    Node* temp1=head;
    Node* temp2=head->next;
    Node* temp3=head->next->next;
    temp2->next=head;head->next=NULL;
    if(temp3==NULL){return temp2;}

    while(temp3!=NULL)
    {
        temp1=temp2;
        temp2=temp3;
        temp3=temp3->next;
        temp2->next=temp1;
    }
    return temp2;
}

void disp(Node* head)
{
   cout<<endl;int i=0;
   while(head!=NULL)
   {
       cout<<head->data<<"  ";i++;
       head=head->next;
   }
   cout<<endl<<"size = "<<i<<endl;
}

int main()
{
    Node* head=NULL;
    int n=10,x=0;
    Node* temp=NULL;
    for(int i=0;i<n;i++)
    {
        x+=rand()%20+1;
        Node* element=new Node(x);
        if(head==NULL){head=element;temp=element;}
        else{temp->next=element;temp=temp->next;}
    }

    disp(head);
    Node* head2=reverseLinkedList_recursion(head);
    disp(head2);
    return 0;
}

