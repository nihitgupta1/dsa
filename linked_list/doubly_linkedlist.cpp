#include <iostream>
using namespace std;

struct Node{
    int data;
    Node* next;
    Node* prev;
};

Node* head;

Node* GetNewNode(int x){
    Node* newNode = new Node();
    newNode->data=x;
    newNode->next=NULL;
    newNode->prev=NULL;
    return newNode;
}

void InsertAtHead(int x){
    Node* newNode=GetNewNode(x);
    if(head==NULL){
        head=newNode;
        return;
    }
    head->prev=newNode;
    newNode->next=head;
    head=newNode;
}

void InsertAtTail(int x){
    Node* temp=head;
    Node* newNode=GetNewNode(x);
    if(temp==NULL){
        head=newNode;
        return;
    }
    while(temp->next!=NULL)
        temp=temp->next;
    temp->next=newNode;
    newNode->prev=temp;
}

void Print(){
    Node* temp=head;
    while(temp!=NULL){
        cout<<temp->data;
        temp=temp->next;
    }
    cout<<"\n";
}

void ReversePrint(){
    Node* temp=head;
    if(temp==NULL) return;
    while(temp->next!=NULL)
        temp=temp->next;
    while(temp!=NULL){
        cout<<temp->data;
        temp=temp->prev;
    }
    cout<<"\n";
}

int main(){
    head=NULL;
    InsertAtTail(2); Print(); ReversePrint();
	InsertAtTail(4); Print(); ReversePrint();
	InsertAtHead(6); Print(); ReversePrint();
	InsertAtTail(8); Print(); ReversePrint();
}