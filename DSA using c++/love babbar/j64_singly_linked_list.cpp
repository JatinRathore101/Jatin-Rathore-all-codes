#include<bits/stdc++.h>
using namespace std;

class Node
{
    public:
    int value;
    Node* next;
    Node()
    {
        this->next=NULL;
    }
    Node(int value)
    {
        this->next=NULL;
        this->value=value;
    }
};

void pushWH(Node* &head,Node* &tail,int value,int position)
{
    if(position==0)
    {
        Node* element=new Node(value);
        if(head==NULL){head=element;tail=element;}
        else{Node* temp=head;head=element;head->next=temp;}
    return;
    }

    Node* temp=head;
    while(position>1){if(temp==NULL){cout<<"position limit exceeded"<<endl;return;}temp=temp->next;position--;}
    if(temp==tail->next){cout<<"position limit exceeded"<<endl;return;}

    Node* element=new Node(value);
    if(tail==temp){tail->next=element;tail=tail->next;return;}

    Node* temp2=temp->next;
    temp->next=element;
    element->next=temp2;
    return;
}

void pushAtTail(Node* &head,Node* &tail,int value)
{
    Node* element=new Node(value);
    if(tail==NULL){head=element;tail=element;return;}
    tail->next=element;tail=tail->next;
    return;
}

void popWH(Node* &head,Node* &tail,int position)
{
    Node* temp=head;
    if(head==NULL){cout<<"Nothing to pop";return;}
    if(position==0)
    {if(head==tail){Node* temp=head;head=NULL;tail=NULL;delete temp;return;}
     Node* temp=head;head=head->next;temp->next=NULL;delete temp;return;}

    Node* temp2;
    while(position>0){if(temp->next==NULL){cout<<"position limits exceed";return;}temp2=temp;temp=temp->next;position--;}

    if(temp==tail){tail=temp2;tail->next=NULL;delete temp;}

    temp2->next=temp->next;
    temp->next=NULL;
    delete temp2;
    return;
}

void popAtTail(Node* &head,Node* &tail)
{
    if(tail==NULL){cout<<"nothing to pop";return;}
    else if(tail==head){Node* temp=head;head=NULL;tail=NULL;delete temp;return;}

    Node* temp=head;
    while(temp->next!=tail){temp=temp->next;}
    tail=temp;temp=temp->next;tail->next=NULL;
    delete temp;
    return;
}

void disp(Node* head)
{
    cout<<endl;
    int i=0;
    while(head!=NULL)
    {
        cout<<head->value<<"  ";
        head=head->next;i++;
    }
    cout<<endl<<"length of list = "<<i;
    cout<<endl;
}


int main()
{
    Node* head=NULL;Node* tail=NULL;

    int i=1;

    while(i!=0)
    {
        cout<<endl<<" 0 : exit"<<endl;
        cout<<" 1 : push wrto head : position = 0 to push at head"<<endl;
        cout<<" 2 : push at tail"<<endl;
        cout<<" 3 : pop wrto head : position = 0 to pop at head"<<endl;
        cout<<" 4 : pop at tail"<<endl;
        cout<<" 5 : display list"<<endl;

        cin>>i;

        if(i==1)
        {
            int value,position;
            cout<<"enter value and position  ";
            cin>>value>>position;
            pushWH(head,tail,value,position);
        }
        else if(i==2)
        {
            int value;
            cout<<"enter value  ";
            cin>>value;
            pushAtTail(head,tail,value);
        }
        else if(i==3)
        {
            int position;
            cout<<"enter position  ";
            cin>>position;
            popWH(head,tail,position);
        }
        else if(i==4)
        {
            popAtTail(head,tail);
        }
        else if(i==5)
        {
            disp(head);
        }

    }

    return 0;
}
