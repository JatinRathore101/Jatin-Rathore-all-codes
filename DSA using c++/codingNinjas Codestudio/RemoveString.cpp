#include<bits/stdc++.h>
using namespace std;

class Node
{
    public:
        char data;
        Node *next;
        Node(int data)
        {
            this->data = data;
            this->next = NULL;
        }
};

void disp(Node* head)
{
    cout<<endl;
    while(head!=NULL)
    {
        cout<<head->data;head=head->next;
    }
    cout<<endl;
}

bool checkllstr(Node* &temp1,string str)
{
    int n=str.size();
    Node* temp2=temp1->next;
    for(int i=0;i<n;i++)
    {
        if(temp2==NULL){return false;}
        if(temp2->data!=str[i]){return false;}
        temp2=temp2->next;
    }

    Node* del=temp1->next;
    temp1->next=temp2;

    while(del!=temp2)
    {
        Node* deleteit=del;
        del=del->next;
        deleteit->next=NULL;
        delete deleteit;
    }

    return true;
}

Node *removeStr(Node *head, string str)
{
    Node* first=new Node('#');
    first->next=head;head=first;

    bool flag=true;bool flag2=false;
    while(flag==true)
    {
        flag=false;
        Node* temp1=head;Node* temp2=head->next;Node* temp3=head->next->next;

        while(temp2!=NULL)
        {   if(temp2->data==str[0])
            {
                flag2=checkllstr(temp1,str);
                if(flag2==false){temp1=temp1->next;}
                else{flag=flag2;}
            }
            else
            {
                temp1=temp1->next;
            }

            temp2=temp1->next;
            if(temp2==NULL){break;}
            temp3=temp2->next;
        }
    }

    Node* delh=head;
    head=head->next;
    delh->next=NULL;
    delete delh;
    return head;
}

int main()
{
    string str="bca";
    string ll="abcbcaab";
    int i=0,n=ll.size();
    Node* head=NULL;Node* tail=NULL;
    while(i<n)
    {
        Node* element=new Node(ll[i]);i++;
        if(head==NULL){head=element;tail=element;}
        else{tail->next=element;tail=tail->next;}
    }
    disp(head);
    Node* head2=removeStr(head,str);
    disp(head2);

    return 0;
}
