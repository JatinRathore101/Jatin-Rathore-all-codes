#include<bits/stdc++.h>
using namespace std;

struct Node
{
    int data;
    struct Node *next;
    Node(int x)
    {
        data = x;
        next = NULL;
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

Node* reverse(Node* head)
{
    if(head->next==NULL){return head;}
    Node* temp1=head;Node* temp2=head->next;Node* temp3=head->next->next;
    temp2->next=temp1;temp1->next=NULL;

    while(temp3!=NULL)
    {
        temp1=temp2;
        temp2=temp3;
        temp3=temp3->next;
        temp2->next=temp1;
    }
    return temp2;
}

struct Node* addTwoLists(struct Node* first, struct Node* second)
{
    if(first==NULL){return second;}
    else if(second==NULL){return first;}

    first=reverse(first);second=reverse(second);

    Node* head=NULL;Node* tail=NULL;int carry=0;

    while(first!=NULL||second!=NULL||carry!=0)
    {
        if(first!=NULL&&second!=NULL)
        {
            carry+=first->data+second->data;
            first=first->next;
            second=second->next;
        }
        else if(first!=NULL)
        {
            carry+=first->data;
            first=first->next;
        }
        else if(second!=NULL)
        {
            carry+=second->data;
            second=second->next;
        }

        Node* element=new Node(carry%10);carry/=10;

        if(head==NULL){head=element;tail=element;}
        else{tail->next=element;tail=tail->next;}
    }

    return reverse(head);

};

int main()
{
    Node* head=NULL;Node* tail=NULL;
    int i=0,n=7;
    while(i<n)
    {
        Node* element=new Node(rand()%7+1);i++;
        if(head==NULL){head=element;tail=element;}
        else{tail->next=element;tail=tail->next;}
    }
    Node* first=head;

    head=NULL;tail=NULL;
    i=0;n=7;
    while(i<n)
    {
        Node* element=new Node(rand()%9+1);i++;
        if(head==NULL){head=element;tail=element;}
        else{tail->next=element;tail=tail->next;}
    }
    Node* second=head;

    disp(first);disp(second);
    struct Node* sum=addTwoLists(first,second);
    disp(sum);

    return 0;
}

