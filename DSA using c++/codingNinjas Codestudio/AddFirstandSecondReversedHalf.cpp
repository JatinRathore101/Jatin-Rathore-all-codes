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

Node* addFirstAndReversedSecondHalf(Node* head)
{
    if(head==NULL||head->next==NULL){return head;}

    Node* slow=head;Node* fast=head;
    Node* first=NULL;Node* second=NULL;Node* fastback=NULL;

    while(fast!=NULL&&fast->next!=NULL)
    {
        slow=slow->next;
        fastback=fast;
        fast=fast->next->next;
    }
    if(fast==NULL)
    {
        second=slow;
        Node* z1=new Node(0);
        fastback->next->next=z1;
    }
    else
    {
        second=slow->next;
        Node* z1=new Node(0);
        Node* z2=new Node(0);
        fast->next=z1;
        z1->next=z2;
    }

    Node* temp1=new Node(-1);temp1->next=head;
    Node* temp2=temp1->next;Node* temp3=temp1->next->next;

    temp1->next=NULL;
    temp2->next=temp1;
    while(temp3!=second)
    {
        temp1=temp2;
        temp2=temp3;
        temp3=temp3->next;
        if(temp3==NULL){break;}
        temp2->next=temp1;
    }
    first=temp2;
    head->next->data=0;

    temp1=first;temp2=second;
    int sum=0;

    while(temp1!=NULL)
    {
        sum+=temp1->data+temp2->data;
        temp1->data=sum%10;
        temp1=temp1->next;
        sum/=10;
        Node* del=temp2;
        temp2=temp2->next;
        del->next=NULL;
        delete del;
    }

    temp1=first;temp2=first->next;temp3=first->next->next;
    temp1->next=NULL;temp2->next=temp1;
    while(temp3!=NULL)
    {
        temp1=temp2;
        temp2=temp3;
        temp3=temp3->next;
        temp2->next=temp1;
    }

    head=temp2;
    while(head->data==0&&head->next!=NULL)
    {Node* del=head;head=head->next;del->next=NULL;delete del;}

    return head;
}

int main()
{
    int i=1,n=7;
    Node* head=NULL;Node* tail=NULL;

    while(i<=n)
    {
        Node* element=new Node(rand()%5+5);i++;
        if(head==NULL){head=element;tail=element;}
        else{tail->next=element;tail=tail->next;}
    }
    disp(head);
    Node* head2=addFirstAndReversedSecondHalf(head);
    disp(head2);

    return 0;
}
