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

void Print(){
    Node* temp=head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    cout<<"\n";
}

void Delete(int n){
    Node* temp1=head;
    if(n==1){
        head=temp1->next;
        delete temp1;
        return;
    }
    for(int i=0;i<n-2;i++){
        temp1=temp1->next;
    } 
    Node* temp2=temp1->next;
    temp1->next=temp2->next;
    delete temp2;
}

int main(){
    head=NULL;
    Insert(2);
    Insert(4);
    Insert(5);
    Insert(6); 
    Print();
    int n;
    cout<<"Enter a position: ";
    cin>>n;
    Delete(n);
    Print();
}
