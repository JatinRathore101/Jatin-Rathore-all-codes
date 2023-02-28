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

Node* modifyLL(Node* head)
{
    if(head==NULL||head->next==NULL||head->next->next==NULL){return head;}
    Node* slow=head;Node* fast=head;Node* slowback=NULL;
    while(fast!=NULL&&fast->next!=NULL)
    {
        slowback=slow;
        slow=slow->next;
        fast=fast->next->next;
    }
    if(fast!=NULL){slowback=slow;slow=slow->next;}
    slowback->next=NULL;
    Node* head1=head;
    Node* head2=NULL;

    if(slow->next!=NULL)
    {
        Node* temp1=slow;Node* temp2=slow->next;Node* temp3=slow->next->next;
        temp1->next=NULL;temp2->next=temp1;

        while(temp3!=NULL)
        {
            temp1=temp2;
            temp2=temp3;
            temp3=temp3->next;
            temp2->next=temp1;
        }
        head2=temp2;
    }
    else
    {
        head2=slow;
    }

    while(head2!=NULL)
    {
        Node* element=head2;
        head2=head2->next;
        element->next=head1->next;
        head1->next=element;
        head1=head1->next->next;
    }

    return head;

}

int main()
{
    int i=1,n=3;

    Node* head=NULL;Node* tail=NULL;

    while(i<=n)
    {
        Node* element=new Node(i);i++;
        if(head==NULL){head=element;tail=element;}
        else{tail->next=element;tail=tail->next;}
    }
    disp(head);
    Node* head2=modifyLL(head);
    disp(head2);

    return 0;
}
