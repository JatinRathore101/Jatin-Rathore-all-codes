#include<bits/stdc++.h>
using namespace std;

class Node
{
public:
    int value;
    Node* next;
    Node()
    {
        next=NULL;
    }
    Node(int value)
    {
        this->value=value;
        this->next=NULL;
    }
};

void push(Node* &head,int value,int position)
{
    Node* element=new Node(value);
    if(head==NULL){head=element;return;}
    else if(head->next==NULL){head->next=element;element->next=head;return;}

    Node* temp=head;Node* temp2=head->next;
    while(position>0){temp=temp2;temp2=temp2->next;position--;}
    temp->next=element;
    element->next=temp2;return;
}

void pop(Node* &head,int position)
{
    if(head==NULL){cout<<"Nothing to pop  ";return;}
    else if(head->next==NULL){Node* temp=head;head=NULL;delete temp;return;}

    Node* temp=head->next;
    int flag=0;// flag [ close chain to open ]
    if(temp->next==head){flag=1;}

    temp=head;
    Node* temp2=head->next;
    while(position>1){temp=temp2;temp2=temp2->next;position--;}

    if(flag==1)
    {if(temp2==head){head=head->next;}
     head->next=NULL;temp2->next=NULL;delete temp2;return;}

     temp->next=temp2->next;
     temp2->next=NULL;
     delete temp2;return;
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
