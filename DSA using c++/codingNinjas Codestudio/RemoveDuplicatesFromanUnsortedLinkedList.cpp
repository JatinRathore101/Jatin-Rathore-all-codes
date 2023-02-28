#include<bits/stdc++.h>
using namespace std;

// cant find any error

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

Node *removeDuplicates(Node *head)
{
    if(head==NULL||head->next==NULL){return head;}

    Node* temp1=head;Node* temp2=head->next;
    unordered_map<int,int> m;m[temp1->data]++;

    while(temp2!=NULL)
    {
        m[temp2->data]++;
        if( m[temp2->data]>1)
        {
             m[temp2->data]--;
             Node* element=temp2;
             temp1->next=temp2->next;
             temp2=temp2->next;
             element->next=NULL;
             delete element;
        }
        else
        {
            temp1=temp2;
            temp2=temp2->next;
        }
    }

    m.clear();
    return head;
}

int main()
{
    Node* head=NULL;Node* tail=NULL;
    int i=0,n=6;vector<int> v={3,2,3,4,2,3};

    while(i<n)
    {
        Node* element=new Node(v[i]);
        if(head==NULL){head=element;tail=element;}
        else{tail->next=element;tail=tail->next;}
        i++;
    }

    disp(head);
    Node* head2=removeDuplicates(head);
    disp(head2);

    return 0;
}

