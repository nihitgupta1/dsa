#include <iostream>
using namespace std;

struct Node{
    int data;
    Node* next;
};
struct Node* head;

void Insert(int n){
    Node* temp1=new Node();
    temp1->data=n;
    temp1->next=NULL;
    if(head==NULL){
        head=temp1;
        return;
    }
    Node* temp2=head;
    while(temp2->next!=NULL){
        temp2=temp2->next;
    }
    temp2->next=temp1;
}

void Print(Node* p){
    if(p==NULL) return;
    cout<<p->data<<" ";
    Print(p->next);
}

int main(){
    head=NULL;
    Insert(2);
    Insert(4);
    Insert(5);
    Insert(6); 
    Print(head);
}