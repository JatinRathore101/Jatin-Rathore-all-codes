#include<bits/stdc++.h>
using namespace std;

template <typename T>
class LinkedListNode
{
    public:
        T data;
        LinkedListNode<T> *next;
        LinkedListNode<T> *random;
        LinkedListNode(T data)
        {
            this->data = data;
            this->next = NULL;
        }
};

template <typename T>
void disp(LinkedListNode<T> *head)
{
    cout<<endl;int i=0;
    while(head!=NULL)
    {
        i++;
        cout<<head->data<<"  ";head=head->next;
    }
    cout<<endl<<"size = "<<i<<endl;
}

LinkedListNode<int> *cloneRandomList(LinkedListNode<int> *head)
{
    if(head==NULL){return head;}

    LinkedListNode<int>* temp=head;
    while(temp!=NULL)
    {
        LinkedListNode<int>* element=new LinkedListNode<int>(temp->data);
        element->next=temp->next;
        temp->next=element;
        temp=element->next;
    }

    temp=head;
    while(temp!=NULL)
    {
        if(temp->random==NULL)
        {
            temp->next->random=NULL;
        }
        else
        {
            temp->next->random=temp->random->next;
        }
        temp=temp->next->next;
    }

    int i=0;temp=head;
    LinkedListNode<int>* head1=NULL;
    LinkedListNode<int>* tail1=NULL;
    LinkedListNode<int>* head2=NULL;
    LinkedListNode<int>* tail2=NULL;
    while(temp!=NULL)
    {
        LinkedListNode<int>* element=temp;
        temp=temp->next;
        element->next=NULL;
        if(i%2==0)
        {
            if(head1==NULL){head1=element;tail1=element;}
            else{tail1->next=element;tail1=tail1->next;}
        }
        else
        {
            if(head2==NULL){head2=element;tail2=element;}
            else{tail2->next=element;tail2=tail2->next;}
        }
        i++;
    }

    head=head1;

    return head2;
}

int main()
{
    int i=1,n=10;

    LinkedListNode<int>* head=NULL;LinkedListNode<int>* tail=NULL;

    while(i<=n)
    {
        LinkedListNode<int>* element=new LinkedListNode<int>(i);i++;
        if(head==NULL){head=element;tail=element;}
        else{tail->next=element;tail=tail->next;}
    }
    disp(head);
    LinkedListNode<int>* head2=cloneRandomList(head);
    disp(head2);

    return 0;
}
