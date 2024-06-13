// implement doubly linked list
#include<bits/stdc++.h>
using namespace std;

class node{
    public:
      int data;
    node * next;
    node* prev;
    node(int val){
        data = val;
        next = NULL;
        prev = NULL;
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
    new_node->prev = NULL;
}

void display(node*& head){
    node* cur = head;
    while(cur!=NULL){
        cout<<cur->data<<"-->";
        cur = cur->next;
    }
    cout<<"NULL\n";
}
// find length of ll
int lengthll(node* head){
    int len = 0;
    node* cur = head;
    while(cur!=NULL){
        len++;
        cur = cur->next;
    }
    return len;
}

// search element in LL
bool searchll(node* head,int k){
    node* cur = head;
    while(cur!=NULL){
        if(cur->data==k){
            return true;
        }
        cur = cur->next;
    }
    return false;
}

int main(){
    node* head = NULL;
    insertll(head,2);
    insertll(head,4);
    insertll(head,6);
    insertll(head,8);
    display(head);
    int ans = searchll(head,6);
    cout<<ans<<endl;
    cout<<"The length of the LL are "<<lengthll(head);
    return 0;
}