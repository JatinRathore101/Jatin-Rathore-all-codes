#include<bits/stdc++.h>
using namespace std;

class Node
{
    public:
        int data;
        Node* next;
        Node* child;

        Node(int data)
        {
            this->data = data;
            this->next = NULL;
            this->child = NULL;
        }
};

void disp_via_next_pointer(Node* head)
{
    cout<<endl;int i=0;
    while(head!=NULL)
    {
        cout<<head->data<<"  ";i++;
        head=head->next;
    }
    cout<<endl<<"size = "<<i<<endl;
}

void disp(Node* head)
{
    cout<<endl;int i=0;
    while(head!=NULL)
    {
        cout<<head->data<<"  ";i++;
        head=head->child;
    }
    cout<<endl<<"size = "<<i<<endl;
}

Node* mergell(Node* temp1,Node* temp2)
{
    Node* head=NULL;Node* tail=NULL;

    /*

    while(temp1!=NULL||temp2!=NULL)
    {
        Node* element;
        if(temp1!=NULL&&temp2!=NULL)
        {
            if(temp1->data<temp2->data)
            {
                element=temp1;
                temp1=temp1->child;
            }
            else
            {
                element=temp2;
                temp2=temp2->child;
            }
        }
        else if(temp1!=NULL)
        {
            element=temp1;
            temp1=temp1->child;
        }
        else if(temp2!=NULL)
        {
            element=temp2;
            temp2=temp2->child;
        }

        if(head==NULL){head=element; tail=element;}
        else{tail->child=element;tail=tail->child;}
    }

    */

    Node* element=NULL;
    while(temp1!=NULL&&temp2!=NULL)
    {
        if(temp1->data<temp2->data)
        {
            element=temp1;
            temp1=temp1->child;
        }
        else
        {
            element=temp2;
            temp2=temp2->child;
        }
        if(head==NULL){head=element; tail=element;}
        else{tail->child=element;tail=tail->child;}
    }

    if(temp1!=NULL)
    {
        /*
        element=temp1;
        temp1=temp1->child;
        if(head==NULL){head=element; tail=element;}
        else{tail->child=element;tail=tail->child;}
        */
        if(head==NULL){head=temp1; tail=temp1;}
        else{tail->child=temp1;}
    }

    if(temp2!=NULL)
    {
        /*
        element=temp2;
        temp2=temp2->child;
        if(head==NULL){head=element; tail=element;}
        else{tail->child=element;tail=tail->child;}
        */
        if(head==NULL){head=temp2; tail=temp2;}
        else{tail->child=temp2;}
    }

    return head;
}

Node* flattenLinkedList(Node* head)
{
    Node* temp=NULL;
    if(head->next!=NULL){temp=flattenLinkedList(head->next);}
    head->next=NULL;
    return mergell(temp,head);
}

int main()
{
    Node* head=NULL;Node* tail=NULL;
    int i=1,n=10;

    while(i<=n)
    {
        Node* element1=new Node(0);i++;
        if(head==NULL){head=element1;tail=element1;}
        else{tail->next=element1;tail=tail->next;}

        Node* tail2=tail;int j=1,m=rand()%7;

        cout<<element1->data<<"  ";

        while(j<=m)
        {
            Node* element2=new Node(j);
            tail2->child=element2;
            tail2=tail2->child;
            j++;
            cout<<element2->data<<"  ";
        }
        cout<<endl;
    }

    cout<<endl;


    Node* head2=flattenLinkedList(head);
    disp(head2);

    return 0;
}
