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
        cout<<head->data<<"  ";
        head=head->next;
        i++;
    }
    cout<<endl<<"size = "<<i<<endl;
}

Node* sortList(Node *head)
{
    Node* temp0i=NULL;
    Node* temp1i=NULL;
    Node* temp2i=NULL;
    Node* temp0f=NULL;
    Node* temp1f=NULL;
    Node* temp2f=NULL;

    while(head!=NULL)
    {
        Node* temp=head;
        head=head->next;
        temp->next=NULL;

        if(temp->data==0)
        {
            if(temp0i==NULL)
            {
                temp0i=temp;
                temp0f=temp;
            }
            else
            {
                temp0f->next=temp;
                temp0f=temp0f->next;
            }
        }
        else if(temp->data==1)
        {
            if(temp1i==NULL)
            {
                temp1i=temp;
                temp1f=temp;
            }
            else
            {
                temp1f->next=temp;
                temp1f=temp1f->next;
            }
        }
        else if(temp->data==2)
        {
            if(temp2i==NULL)
            {
                temp2i=temp;
                temp2f=temp;
            }
            else
            {
                temp2f->next=temp;
                temp2f=temp2f->next;
            }
        }
    }

    if(temp0i==NULL&&temp1i==NULL)
    {
        head=temp2i;
    }
    else if(temp2i==NULL&&temp1i==NULL)
    {
        head=temp0i;
    }
    else if(temp0i==NULL&&temp2i==NULL)
    {
        head=temp1i;
    }
    else if(temp0i==NULL)
    {
        head=temp1i;
        temp1f->next=temp2i;
    }
    else if(temp1i==NULL)
    {
        head=temp0i;
        temp0f->next=temp2i;
    }
    else if(temp2i==NULL)
    {
        head=temp0i;
        temp0f->next=temp1i;
    }
    else
    {
        head=temp0i;
        temp0f->next=temp1i;
        temp1f->next=temp2i;
    }

    return head;
}

Node* sortList2(Node *head) // TLE
{
    Node* tail=head;
    while(tail->next!=NULL){tail=tail->next;}

    Node* element1=new Node(0);element1->next=head;head=element1;
    Node* element2=new Node(2);tail->next=element2;tail=element2;
    Node* temp1=head;
    Node* temp2=head->next;
    Node* temp3=head->next->next;
    Node* temp4=tail;


    while(temp2!=NULL)
    {
        if(temp2->data==0)
        {
            temp1->next=temp3;
            temp2->next=head->next;
            head->next=temp2;
        }
        else if(temp2->data==1)
        {
            temp1=temp1->next;
        }
        else if(temp2->data==2)
        {
            temp1->next=temp3;
            temp2->next=NULL;
            tail->next=temp2;
            tail=temp2;
        }
        temp2=temp1->next;
        if(temp2==NULL||temp2==temp4){break;}
        temp3=temp1->next->next;
    }

    if(head==element1)
    {head=head->next;delete element1;}
    if(head==element2)
    {head=head->next;delete element2;}
    if(head==element1)
    {head=head->next;delete element1;}

    temp1=head;
    while(temp1!=NULL)
    {
        if(temp1->next==element1)
        {
            temp1->next=element1->next;
            element1->next=NULL;
            delete element1;
        }
        if(temp1->next==element2)
        {
            temp1->next=element2->next;
            element2->next=NULL;
            delete element2;
        }
        temp1=temp1->next;
    }

    return head;
}

int main()
{
    int n=15;
    Node* head=NULL;Node* tail=NULL;
    for(int i=0;i<n;i++)
    {
        Node* element=new Node(rand()%3);
        if(head==NULL){head=element;tail=element;}
        else{tail->next=element;tail=tail->next;}
    }

    disp(head);
    Node* head2=sortList2(head);
    disp(head2);



    return 0;
}
