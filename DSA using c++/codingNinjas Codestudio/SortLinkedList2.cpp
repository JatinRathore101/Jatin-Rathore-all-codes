#include<bits/stdc++.h>
using namespace std;

// Sort Linked List codestudio Contributed by Prateek_18cb

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

Node *sortLL(Node *head)
{
    if(head==NULL||head->next==NULL){return head;}
    Node* fh=new Node(-1);
    fh->next=head;head=fh;
    Node* ifh=NULL;

    for(int i=1;i>=0;i--)
    {
        Node* temp1=head;Node* temp2=head->next;Node* temp3=head->next->next;
        while(temp2!=NULL)
        {
            if(temp2->data==i)
            {
                temp1->next=temp3;
                temp2->next=head;
                if(temp2->next==fh){ifh=temp2;}
                head=temp2;
            }
            else
            {
                temp1=temp1->next;
            }
            temp2=temp1->next;
            if(temp2==NULL){break;}
            temp3=temp2->next;
        }
    }

    if(ifh==NULL){head=head->next;}
    else{ifh->next=fh->next;}
    fh->next=NULL;delete fh;

    return head;

}

int main()
{
    int i=0,n=15;

    Node* head=NULL;Node* tail=NULL;

    while(i<n)
    {
        Node* element=new Node(rand()%3);i++;
        if(head==NULL){head=element;tail=element;}
        else{tail->next=element;tail=tail->next;}
    }
    disp(head);
    Node* head2=sortLL(head);
    disp(head2);

    return 0;
}
