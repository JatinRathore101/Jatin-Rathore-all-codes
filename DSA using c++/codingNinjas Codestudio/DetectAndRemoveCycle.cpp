#include<bits/stdc++.h>
using namespace std;

/*
Watch => Love Babbar  CodeHelp - by Babbar
Lecture47: Detect & Remove Loop in Linked List [Approach Discussion + Optimised Implementation]
https://www.youtube.com/watch?v=VxOFflTXlXo&list=PLDzeHZWIZsTryvtXdMr6rPh4IDexB5NIA&index=52
*/

class Node
{
    public :
        int data;
        Node *next;

        Node(int data)
        {
            this -> data = data;
            this -> next = NULL;
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
    cout<<endl<<"size  = "<<i<<endl;
}

Node *removeLoop(Node *head)
{
    if(head==NULL||head->next==NULL){return head;}
    Node* slow=head->next;Node* fast=head->next->next;
    while(slow!=fast)
    {
        slow=slow->next;
        fast=fast->next->next;
        if(fast==NULL||fast->next==NULL){return head;}
    }
    fast=head;Node* slowback=NULL;
    if(slow!=fast)
    {
        while(slow!=fast)
        {
            slowback=slow;
            slow=slow->next;
            fast=fast->next;
        }
    }
    else
    {
        while(slow->next!=head)
        {
            slow=slow->next;
        }
        slowback=slow;
    }
    slowback->next=NULL;
    //cout<<"-> "<<slow->data<<"  <-";

    return head;
}

int main()
{
    Node* head=NULL;Node*tail=NULL;
    int i=1,n=rand()%10+7,N=rand()%10+11;
    cout<<"n = "<<n<<"        N = "<<N<<endl;

    Node* somemid=NULL;
    while(i<=N)
    {
        Node* element=new Node(i);
        if(head==NULL){head=element;tail=element;}
        else
        {
            tail->next=element;
            tail=tail->next;
            if(i==n){somemid=tail;}

        }
        i++;
    }

    disp(head);
    tail->next=somemid;
    cout<<"->  "<<somemid->data<<"  <-";
    head=removeLoop(head);
    disp(head);

    return 0;
}

