// only reverse function

void Reverse(){
    if(head==NULL) returnl
    stack<int> S;
    Node* temp=head;
    while(temp){
        S.push(head->val);
        temp=temp->next;
    }
    temp=S.top(); S.pop(); head=temp;
    while(!S.empty()){
        temp->next=S.top();
        S.pop();
        temp=temp->next;
    }
    temp->next=NULL;
}