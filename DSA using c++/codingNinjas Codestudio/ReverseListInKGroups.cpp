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
        cout<<head->data<<"  ";i++;
        head=head->next;
    }
    cout<<endl<<"size = "<<i<<endl;
}

Node* kReverse(Node* head, int k)
{
    if(head==NULL||head->next==NULL){return head;}

    Node* temp1=head;Node* temp2=head->next;Node* temp3=head->next->next;

    head->next=NULL;
    int i=k;
    while(i>1&&temp2!=NULL)
    {
        temp2->next=temp1;
        temp1=temp2;
        temp2=temp3;
        if(temp3==NULL){break;}
        temp3=temp3->next;
        i--;
    }

    temp3=head;
    head=temp1;
    temp1=temp3;
    temp3=kReverse(temp2,k);
    temp1->next=temp3;
    return head;
}

int main()
{
    Node* head=NULL;
    Node* tail=NULL;
    int n=24,k=4;
    for(int i=0;i<n;i++)
    {
        Node* element=new Node(i+1);
        if(head==NULL){head=element;tail=element;}
        else{tail->next=element;tail=tail->next;}
    }

    disp(head);
    Node* head2=kReverse(head,k);
    disp(head2);

    return 0;
}
