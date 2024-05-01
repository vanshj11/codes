#include<bits/stdc++.h>
using namespace std;

struct Node{
    int val;
    Node* next;
};

void display(Node* &head){
    if(head==NULL){
        cout<<"\nEmpty list";
        return;
    }

    Node* temp = head;

    cout<<"\n";

    while(temp!=NULL){
        cout<<temp->val<<"\t";
        temp=temp->next;
    }
}

void begInsert(Node* &head, int val){
    Node* new_node = new Node();
    new_node->val=val;
    new_node->next = head;
    head=new_node;
}

void endInsert(Node* &head, int val){
    Node* new_node = new Node();
    new_node->val = val;
    new_node->next = NULL;

    if(head==NULL){
        head=new_node;
        return;
    }

    Node* temp = head;
    while(temp->next!=NULL){
        temp=temp->next;
    }
    temp->next = new_node;
}

void posInsert(Node* &head, int pos, int val){
    Node* new_node = new Node();
    new_node->val = val;

    Node* temp = head;

    for(int i=2; i<pos; i++){
        temp=temp->next;
    }

    new_node->next = temp->next;
    temp->next = new_node;
}

void begDlt(Node* &head){
    Node* temp = head;
    head=temp->next;
    free(temp);
}

void endDlt(Node* head){
    Node* temp = head;

    while(temp->next->next!=NULL){
        temp = temp->next;
    }

    free(temp->next);
    temp->next=NULL;
}

void posDlt(Node* &head, int pos){
    Node* temp = head;

    for(int i=1; i<pos; i++){
        temp=temp->next;
    }

    Node* del = temp->next;
    temp->next = temp->next->next;
    free(del);
}

int main(){
    struct Node* head = NULL;

    begInsert(head, 10);
    begInsert(head, 20);
    begInsert(head, 30);

    display(head);

    endInsert(head, 40);
    endInsert(head, 50);
    endInsert(head, 60);

    posInsert(head, 3, 30);

    display(head);

    begDlt(head);

    endDlt(head);

    posDlt(head, 3);
    
    display(head);

    return 0;
}