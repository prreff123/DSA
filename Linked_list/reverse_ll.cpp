#include<bits/stdc++.h>
using namespace std;

class node{
    public:
      int data;
    node * next;
    node(int val){
        data = val;
        next = NULL;
    }  
};

void insertll(node* & head,int val){
    node* new_node = new node(val);
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

void display(node* head){
    node* cur = head;
    while(cur!=NULL){
        cout<<cur->data<<"-->";
        cur = cur->next;
    }
    cout<<"NULL\n";
}

node* reverse_ll(node*head){
    node* cur = head;
    node* prev = NULL;
    while(cur!=NULL){
        node* temp = cur->next;
        cur->next = prev;
        prev = cur;
        cur = temp;
    }
    return prev;
}

int main(){
    node* head = NULL;
    insertll(head,1);
    insertll(head,2);
    insertll(head,3);
    insertll(head,4);
    display(head);
    cout<<"The reverse Linkedlist is: "<<reverse_ll(head);
    display(head);
    return 0;
}