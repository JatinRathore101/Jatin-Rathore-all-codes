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
        this->previous=NULL;
        this->next=NULL;
    }
    Node(int value)
    {
        this->previous=NULL;
        this->next=NULL;
        this->value=value;
    }
};

void pushWH(Node* &head,Node* &tail,int value,int position)
{
    Node* temp=head;
    while(position>0){if(temp==NULL){cout<<"position limit exceeded  ";return;}temp=temp->next;position--;}

    Node* element=new Node(value);
    if(head==NULL)
    {head=element;tail=element;}
    else if(temp==head)
    {
        head->previous=element;element->next=head;head=head->previous;
    }
    else if(temp==tail->next)
    {
        tail->next=element;element->previous=tail;tail=tail->next;
    }
    else
    {
        Node* temp2=temp;temp=temp->previous;
        temp->next=element;element->previous=temp;
        element->next=temp2;temp2->previous=element;
    }
    return;
}

void pushAT(Node* &head,Node* &tail,int value)
{
    Node* element=new Node(value);
    if(head==NULL){head=element;tail=element;return;}
    tail->next=element;element->previous=tail;
    tail=tail->next;return;
}

void popWH(Node* &head,Node* &tail,int position)
{
    Node* temp=head;
    while(position>0){if(temp==NULL){cout<<"position limits exceeded  ";return;}temp=temp->next;position--;}

    if(temp==NULL){cout<<"nothing to pop   ";}
    else if(head==tail){head=NULL;tail=NULL;delete temp;}
    else if(temp==head){head=head->next;head->previous=NULL;temp->next=NULL;delete temp;}
    else if(temp==tail){tail=tail->previous;tail->next=NULL;temp->previous=NULL;delete temp;}
    else{
        Node* temp1=temp->previous;
        Node* temp2=temp->next;
        temp1->next=temp2;temp2->previous=temp1;
        temp->next=NULL;temp->previous=NULL;
        delete temp;
    }
    return;
}

void popAT(Node* &head,Node* &tail)
{
    if(tail==NULL){cout<<"nothing to pop ";return;}
    else if(tail==head){Node* temp=tail;tail=NULL;head=NULL;delete temp;return;}

    Node* temp=tail;tail=tail->previous;tail->next=NULL;temp->previous=NULL;
    delete temp;return;
}

void disp(Node* head,Node* tail)
{
    int i=0;
    if(tail!=NULL)
    {
        while(head!=tail->next)
        {
            cout<<head->value<<"  ";
            head=head->next;i++;
        }
    }
    cout<<endl<<"length = "<<i<<endl;
}

int main()
{
    Node* head=NULL;
    Node* tail=NULL;
    int i=1;

    while(i!=0)
    {
        cout<<" 0 : exit"<<endl;
        cout<<" 1 : push wrto head : position = 0 to push at head"<<endl;
        cout<<" 2 : push at tail"<<endl;
        cout<<" 3 : pop wrto head : position = 0 to pop at head"<<endl;
        cout<<" 4 : pop at tail"<<endl;
        cout<<" 5 : display linked list "<<endl;
        cin>>i;
        if(i==1)
        {
            cout<<"enter value and position  ";
            int value,position;cin>>value>>position;
            pushWH(head,tail,value,position);
        }
        else if(i==2)
        {
            cout<<"enter value  ";
            int value;cin>>value;
            pushAT(head,tail,value);
        }
        else if(i==3)
        {
            cout<<"enter position  ";
            int position;cin>>position;
            popWH(head,tail,position);
        }
        else if(i==4)
        {
            popAT(head,tail);
        }
        else if(i==5)
        {
            disp(head,tail);
        }
    }
    return 0;
}
