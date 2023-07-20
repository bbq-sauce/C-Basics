#include<bits/stdc++.h>
using namespace std;

struct Node
{
    int data;
    Node* next;
};

void push(struct Node** head, int newdata){
    struct Node* newnode= new Node();
    newnode->data=newdata;
    newnode->next=(*head);
    (*head)=newnode;
}

void revLili(struct Node** head){
   struct  Node* next=NULL;
   struct Node* prev=NULL;
    struct Node* current=*head;
    
    while(current!=NULL){
        next=current->next;
        current->next=prev;
        prev=current;
        current=next;
    }
    *head= prev;
}

void PrintList(Node* head){
    struct Node* temp=head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    cout<<endl;
}
int main(){
    Node* head= NULL;
    push(&head,10);
    push(&head,20);
    push(&head,30);
    push(&head,40);
    
    revLili(&head);
    PrintList(head);
    
    return 0;
}
