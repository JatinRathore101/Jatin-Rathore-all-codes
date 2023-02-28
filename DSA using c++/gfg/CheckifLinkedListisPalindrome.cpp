#include<bits/stdc++.h>
using namespace std;

struct Node
{
    int data;
    struct Node *next;
    Node(int x)
    {
        data = x;
        next = NULL;
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

bool isPalindrome(Node *head)
{
    if(head==NULL){return false;}
    else if(head->next==NULL){return true;}

    Node* slow=head;Node* fast=head;Node* slowback=slow;
    while(fast!=NULL&&fast->next!=NULL)
    {
        slowback=slow;
        slow=slow->next;
        fast=fast->next->next;
    }

    if(fast!=NULL){slowback=slow;slow=slow->next;}
    fast=head;

    while(slowback->next!=NULL)
    {
        Node* element=slow;
        slowback->next=slow->next;
        slow=slow->next;
        element->next=fast;
        fast=element;
    }
    slow=head;

    while(fast!=head)
    {
        if(slow->data!=fast->data)
        {
            return false;
        }
        else
        {
            slow=slow->next;
            fast=fast->next;
        }
    }

    return true;
}

int main()
{
    Node* head=NULL;Node* tail=NULL;
    vector<int> v={1,2,3,2,1};
    int i=0,n=v.size();
    while(i<n)
    {
        Node* element=new Node(v[i]);i++;
        if(head==NULL){head=element;tail=element;}
        else{tail->next=element;tail=tail->next;}
    }
    disp(head);
    cout<<::boolalpha<<isPalindrome(head);
    return 0;
}

