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

Node* pairsSwap(Node *head)
{
    if(head==NULL||head->next==NULL){return head;}
    Node* temp1;
    Node* temp2; // 1->2->3;
    Node* temp3;

    Node* head2=head->next;
    head->next=head2->next;
    head2->next=head;

    temp1=head;
    temp2=temp1->next; if(temp2==NULL){return head2;}
    temp3=temp2->next; if(temp3==NULL){return head2;}
    // we have to swap 2 and 3

    while(temp2!=NULL&&temp3!=NULL)
    {
        temp1->next=temp3;
        temp2->next=temp3->next;
        temp3->next=temp2;

        temp1=temp2;
        temp2=temp1->next; if(temp2==NULL){return head2;}
        temp3=temp2->next; if(temp3==NULL){return head2;}
    }
    return head2;
}

Node* pairsSwap2(Node *head)
{
    if(head==NULL||head->next==NULL){return head;}

    vector<int> v;
    while(head!=NULL)
    {
        v.push_back(head->data);
        head=head->next;
    }

    for(int i=0;i<v.size()-1;i+=2)
    {
        swap(v[i],v[i+1]);
    }

    Node* head2=NULL;
    Node* tail=NULL;
    int i=0;
    while(i<v.size())
    {
        Node* element=new Node(v[i]);
        if(head2==NULL){head2=element;tail=element;}
        else{tail->next=element;tail=tail->next;}
        i++;
    }
    return head2;
}

void disp(Node *head)
{
    cout<<endl;int i=0;
    while(head!=NULL){cout<<head->data<<"  ";i++;head=head->next;}
    cout<<endl<<"size = "<<i<<endl;
}

int main()
{
    Node* head=NULL;
    Node* tail=NULL;
    int n,i=1;cin>>n;
    while(i<=n)
    {
        Node* element=new Node(i);
        if(head==NULL){head=element;tail=element;}
        else{tail->next=element;tail=tail->next;}
        i++;
    }

    disp(head);
    Node* head2=pairsSwap2(head);
    disp(head2);
    Node* head3=pairsSwap(head);
    disp(head3);


    return 0;
}

