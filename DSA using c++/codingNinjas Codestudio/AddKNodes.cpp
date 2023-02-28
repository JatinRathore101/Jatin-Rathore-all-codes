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

Node *getListAfterAddingNodes(Node *head, int k)
{
    Node* temp=head;
    int i=0,sum=0;
    while(temp!=NULL)
    {
        if(i<k)
        {
            sum+=temp->data;
        }
        i++;
        if(i==k)
        {
            Node* element=new Node(sum);
            sum=0;
            i=0;
            element->next=temp->next;
            temp->next=element;
            temp=temp->next;
        }
        if(temp->next==NULL&&i!=0)
        {
            Node* element=new Node(sum);
            temp->next=element;
            temp=temp->next;
        }

        temp=temp->next;
    }
    return head;
}

int main()
{
    Node* head=NULL;Node* tail=NULL;
    int i=1,n=10,k=3;

    while(i<=n)
    {
        Node* element=new Node(i);
        if(head==NULL){head=element;tail=element;}
        else{tail->next=element;tail=tail->next;}
        i++;
    }
    disp(head);
    Node* head2=getListAfterAddingNodes(head,k);
    disp(head2);
    return 0;
}

