#include<bits/stdc++.h>
using namespace std;

// Sort Linked List codestudio Contributed by manghla

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
    Node* fh=new Node(0);
    fh->next=head;head=fh;
    Node* temp1=fh;Node*temp2=temp1->next;Node* temp3=temp2->next;
    Node* ifh=NULL;

    while(temp2!=NULL)
    {
        if(temp2->data<0)
        {
            temp1->next=temp3;
            temp2->next=head;
            if(temp2->next==fh){ifh=temp2;}
            head=temp2;
        }
        else
        {
            temp1=temp2;
        }
        temp2=temp3;
        if(temp3==NULL){break;}
        temp3=temp3->next;
    }

    if(ifh==NULL){head=fh->next;fh->next=NULL;delete fh;}
    else{ifh->next=fh->next;fh->next=NULL;delete fh;}
    return head;
}

int main()
{
    vector<int> v={1,2,-3,-3,4,-4,-7,8,-9};
    int i=0,n=9;

    Node* head=NULL;Node* tail=NULL;

    while(i<n)
    {
        Node* element=new Node(v[i]);i++;
        if(head==NULL){head=element;tail=element;}
        else{tail->next=element;tail=tail->next;}
    }
    disp(head);
    Node* head2=sortLL(head);
    disp(head2);

    return 0;
}
