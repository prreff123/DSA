// find the middle element of ll
#include<bits/stdc++.h>
using namespace std;

class node{
    public:
    int data;
    node * next;
    node(int x){
        data = x;
        next = NULL;
    }
};

void insertll(node* &head,int x){
    node* new_node = new node(x);
    if(head==NULL){
        head = new_node;
        return;
    }
    node* temp = head;
    while(temp->next!=NULL){
        temp = temp->next;
    }
    temp->next = new_node;
}

void display(node*head){
    node* cur = head;
    while(cur!=NULL){
        cout<<cur->data<<"-->";
        cur = cur->next;
    }
    cout<<"NULL\n";
}

node* middlell(node* head){
    node* slow=head;
    node* fast=head;
    while(fast && fast->next){
        slow = slow->next;
        fast = fast->next->next;
    }
    return slow;
}

int main(){
    node* head = NULL;
    insertll(head,2);
    insertll(head,4);
    insertll(head,6);
    insertll(head,8);
    insertll(head,12);
    insertll(head,15);
    insertll(head,34);
    display(head);
    cout<<"The middle element is: "<<middlell(head);

    return 0;
}