#include <iostream>
using namespace std;

struct Node{
    int data;
    Node* next;
};

Node* top=NULL;

void Push(int x){
    Node* temp = new Node();
    temp->data=x;
    temp->next=top;
    top=temp;
}

void Pop(){
    Node* temp=top;
    if(top==NULL) return;
    top=temp->next;
    delete temp;
}

 void Print()
    {
        Node* temp = top;
        while(temp)
        {
            cout<<temp->data<<" ";
            temp=temp->next;
        }
        cout<<endl;
    }

int main() {	 
	Push(2);Print();
	Push(5);Print();
	Push(10);Print();
	Pop();Print();
	Push(12);Print();
}