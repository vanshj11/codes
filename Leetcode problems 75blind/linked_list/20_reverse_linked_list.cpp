#include<bits/stdc++.h>
using namespace std;

struct ListNode{
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {} 
};

void display(ListNode* head){
    if(head==nullptr){
        cout<<"\nEmpty list";
        return;
    }

    cout<<"\n";

    ListNode* curr=head;

    while(curr!=nullptr){
        cout<<curr->val<<"\t";
        curr=curr->next;
    }
}

ListNode* insert(ListNode* head, int x){
    ListNode* new_node = new ListNode(x);

    if(head==NULL){
        head=new_node;
        return new_node;
    }

    ListNode* curr=head;
    while(curr->next!=nullptr){
        curr=curr->next;
    }
    curr->next = new_node;
    return head;
}

ListNode* reverseList(ListNode* head){
    ListNode* prev=nullptr;
    ListNode* curr=head;

    while(curr!=nullptr){
        ListNode* forward=curr->next;
        curr->next=prev;
        prev=curr;
        curr=forward;
    }
    return prev;
}

int main(){
    ListNode* head=nullptr;
    head = insert(head, 1);
    head = insert(head, 2);
    head = insert(head, 3);
    head = insert(head, 4);
    head = insert(head, 5);

    display(head);
    ListNode* reverseHead = reverseList(head);

    display(reverseHead);

    return 0;
}