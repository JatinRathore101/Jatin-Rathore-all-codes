#include<bits/stdc++.h>
using namespace std;

struct Node
{
    int data;
    struct Node* next;
    Node(int x) { data = x;  next = NULL; }
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

Node* merge(Node* head,Node* mid)
{
    if(head==NULL){return mid;}
    else if(mid==NULL){return head;}

    Node* head2=NULL;Node* tail2=NULL;Node* element=NULL;

    while(head!=NULL||mid!=NULL)
    {
        element=NULL;
        if(head!=NULL&&mid!=NULL)
        {
            if(head->data<mid->data)
            {
                element=head;
                head=head->next;
                element->next=NULL;
            }
            else
            {
                element=mid;
                mid=mid->next;
                element->next=NULL;
            }
        }
        else if(head!=NULL)
        {
            element=head;head=NULL;
        }
        else
        {
            element=mid;mid=NULL;
        }

        if(head2==NULL){head2=element;tail2=element;}
        else{tail2->next=element;tail2=tail2->next;}
    }
    return head2;
}

Node* middle(Node* head)
{
    Node* slow=head;Node* fast=head;Node* slowback=NULL;
    while(fast!=NULL&&fast->next!=NULL)
    {
        slowback=slow;
        slow=slow->next;
        fast=fast->next->next;
    }
    if(fast!=NULL){slowback=slow;slow=slow->next;}
    slowback->next=NULL;
    return slow;
}

Node* mergeSort(Node* head)
{
    if(head==NULL||head->next==NULL){return head;}
    Node* mid=middle(head);
    head=mergeSort(head);
    mid=mergeSort(mid);
    head=merge(head,mid);
    return head;
}

int main()
{
    Node* head=NULL;Node* tail=NULL;
    int i=1,n=15;
    while(i<=n)
    {
        Node* element=new Node(rand()%10);i++;
        if(head==NULL){head=element;tail=element;}
        else{tail->next=element;tail=tail->next;}
    }
    disp(head);
    head=mergeSort(head);
    disp(head);

    return 0;
}

