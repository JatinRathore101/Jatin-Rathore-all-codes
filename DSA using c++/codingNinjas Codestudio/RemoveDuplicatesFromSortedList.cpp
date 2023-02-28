#include<bits/stdc++.h>
using namespace std;

class Node
{
    public:
        int data;
        Node* next;

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

Node * uniqueSortedList(Node * head)
{
    if(head==NULL||head->next==NULL){return head;}
    Node* temp=head;
    while(temp->next!=NULL)
    {
        if(temp->data==temp->next->data)
        {
            Node* del=temp->next;
            temp->next=temp->next->next;
            del->next=NULL;
            delete del;
        }
        else
        {
            temp=temp->next;
        }
    }

    return head;
}

int main()
{
    Node* head=NULL;Node* tail=NULL;
    int i=1,n=9;

    while(i<=n)
    {
        int j=rand()%4+1;
        while(j>0)
        {
            Node* element=new Node(i);
            if(head==NULL){head=element;tail=element;}
            else{tail->next=element;tail=tail->next;}
            j--;
        }
        i++;
    }

    disp(head);
    Node* head2=uniqueSortedList(head);
    disp(head2);

    return 0;
}

