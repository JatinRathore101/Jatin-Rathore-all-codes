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
        cout<<head->data<<"  ";i++;
        head=head->next;
    }
    cout<<endl<<"size = "<<i<<endl;
}

Node* addNodes(Node* head, int n, int m)
{
    Node* temp=head;
    int i=n+m,sum=0;
    while(temp!=NULL)
    {
        if(i<=n&&i>0)
        {
            sum+=temp->data;
        }
        i--;
        if(i==0)
        {
            Node* element=new Node(sum);
            sum=0;i=m+n;
            element->next=temp->next;
            temp->next=element;
            temp=temp->next;
        }

        if(temp->next==NULL&&i<=n&&i>0)
        {
            Node* element=new Node(sum);
            temp->next=element;
            temp=temp->next;
        }

        temp=temp->next;
    }

    return head;
}

int main()
{
    int n=3,m=6,N=8,i=0;
    Node* head=NULL;Node* tail=NULL;
    vector<int> v={2,9,4,18,4,3,8,6};

    while(i<N)
    {
        Node* element=new Node(v[i]);i++;
        if(head==NULL){head=element;tail=element;}
        else{tail->next=element;tail=tail->next;}
    }

    disp(head);
    Node* head2=addNodes(head,n,m);
    disp(head2);

    return 0;
}

