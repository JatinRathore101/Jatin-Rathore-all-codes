#include<bits/stdc++.h>
using namespace std;

class Node
{
public:
    int value;
    Node* previous;
    Node* next;
    Node()
    {
        previous=NULL;
        next=NULL;
    }
    Node(int value)
    {
        this->value=value;
        this->next=NULL;
        this->previous=NULL;
    }
};

void push(Node* &head,int value,int position)
{
    Node* element=new Node(value);

    if(head==NULL){head=element;return;}
    else if(head->next==NULL)
        {head->previous=element;head->next=element;
        element->previous=head;element->next=head;
        return;}

    Node* temp=head;
    while(position>0){temp=temp->next;position--;}

    element->next=temp;
    element->previous=temp->previous;
    temp->previous=element;
    temp=element->previous;
    temp->next=element;
    return;
}

void pop(Node* &head,int position)
{
    if(head==NULL){cout<<"Nothing to pop  ";return;}
    else if(head->next==NULL){Node* temp=head;head=NULL;delete temp;return;}

    Node* temp=head->next;
    int flag=0;// flag [ close chain to open ]
    if(temp->next==head){flag=1;}


    temp=head->next;
    while(position>1){temp=temp->next;position--;}
    if(temp==head){head=head->next;}

    if(flag==1)
    {head->next=NULL;head->previous=NULL;
     temp->next=NULL;temp->previous=NULL;
     delete temp;return;}



     Node* temp1=temp->previous;
     Node* temp2=temp->next;
     temp1->next=temp2;
     temp2->previous=temp1;
     temp->previous=NULL;
     temp->next=NULL;
     delete temp;return;
}

void disp(Node* head)
{
    cout<<endl;
    int i=0;
    if(head==NULL){cout<<"size = "<<0;return;}
    else if(head->next==NULL){cout<<head->value<<"     size = "<<1;return;}

    Node* temp=head->next;i=1;cout<<head->value<<"  ";
    while(temp!=head){i++;cout<<temp->value<<"  ";temp=temp->next;}
    cout<<"     size = "<<i;return;
    cout<<endl;
}

int main()
{
    Node* head=NULL;
    int i=1;
    while(i!=0)
    {
        cout<<endl<<" 1 : push "<<endl;
        cout<<" 2 : pop "<<endl;
        cout<<" 3 : display"<<endl;
        cin>>i;
        if(i==1)
        {
            int value,position;
            cout<<"Enter value and position  ";
            cin>>value>>position;
            push(head,value,position);
        }
        else if(i==2)
        {
            int position;
            cout<<"Enter position  ";
            cin>>position;
            pop(head,position);
        }
        else if(i==3)
        {
            disp(head);
        }
    }
    return 0;
}
