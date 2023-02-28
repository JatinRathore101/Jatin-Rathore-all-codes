#include<bits/stdc++.h>
using namespace std;

struct Node
{
    int data;
	struct Node* next;
	struct Node* prev;
};

Node* reverseDLL(Node * head)
{
    if(head==NULL||head->next==NULL){return head;}


    Node* temp=NULL;
    while(head!=NULL)
    {
        temp=head->next;
        //if(i==2||i==3||i==4){cout<<"head->prev->prev->data  ="<<head->prev->prev->data<<"        head->prev->data = "<<head->prev->data<<"        head->prev->next->data = "<<head->prev->next->data<<endl;}
        head->next=head->prev;
        head->prev=temp;
        if(temp==NULL){break;}
        head=temp;
    }
    return head;
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

int main()
{
    Node* head=NULL;
    Node* tail=NULL;
    int n=5,x=0;
    for(int i=0;i<n;i++)
    {
        x+=rand()%17+2;
        Node* element=new Node;
        element->next=NULL;
        element->prev=NULL;
        element->data=x;
        if(head==NULL){head=element;tail=element;}
        else{tail->next=element;element->prev=tail;tail=tail->next;}
    }

    disp(head);
    Node* head2=reverseDLL(head);
    disp(head2);

    return 0;
}



/*

//{ Driver Code Starts
//Initial Template for C

#include <stdio.h>
#include <stdlib.h>

// A linked list node
struct Node {
	int data;
	struct Node* next;
	struct Node* prev;
};


/* Given a reference (pointer to pointer) to the head
of a DLL and an int, appends a new node at the end */
//void append(struct Node** head_ref, int new_data)
//{
	/* 1. allocate node */
	//struct Node* new_node
		//= (struct Node*)malloc(sizeof(struct Node));

	//struct Node* last = *head_ref; /* used in step 5*/

	/* 2. put in the data */
	//new_node->data = new_data;

	/* 3. This new node is going to be the last node, so
		make next of it as NULL*/
	//new_node->next = NULL;

	/* 4. If the Linked List is empty, then make the new
		node as head */
	//if (*head_ref == NULL) {
	//	new_node->prev = NULL;
	//	*head_ref = new_node;
	//	return;
	//}

	/* 5. Else traverse till the last node */
//	while (last->next != NULL)
	//	last = last->next;

	/* 6. Change the next of last node */
	//last->next = new_node;

	/* 7. Make last node as previous of new node */
	//new_node->prev = last;

	//return;
//}



// } Driver Code Ends
//User function Template for C

//*/
