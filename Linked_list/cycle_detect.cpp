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

void createcycle(node* &head,int a,int b){
    int cnta = 0,cntb = 0;
    node* p1 = head,* p2 = head;
    while(cnta!=a || cntb!=b){
        if(cnta!=a)p1 = p1->next, ++cnta;
        if(cntb!=b)p2 = p2->next, ++cntb;
    }
    p2->next = p1;
}

bool cycle_detect(node* &head){
    node* slow = head,*fast = head;
    while(fast!=NULL && fast->next!=NULL){
        slow = slow->next;
        fast = fast->next->next;
        if(fast==slow){
            return true;
        }
    }
    return false;
}

int main(){
    node * head = NULL;
    insertll(head,1);
    insertll(head,2);
    insertll(head,3);
    insertll(head,4);
    createcycle(head,1,3);
    if(cycle_detect(head)==true){
        cout<<"Cycle Detected";
    }
    else{
        cout<<"Cycle Not detected";
    }
    return 0;
}