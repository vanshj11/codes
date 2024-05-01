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

    while(head!=nullptr){
        cout<<head->val<<"\t";
        head=head->next;
    }
}

void insert(ListNode* &head, int x){
    ListNode* new_node = new ListNode(x);

    if(head==NULL){
        head=new_node;
        return;
    }

    ListNode* temp = head;
    while(temp->next!=nullptr){
        temp=temp->next;
    }
    temp->next = new_node;
}

bool hadCycle(ListNode *head){
    ListNode *fast=head;
    ListNode *slow=head;
    while(fast!=nullptr && fast->next!=nullptr){
        fast=fast->next->next;
        slow=slow->next;
        if(fast==slow) return true;
    }
    return false;
}

int main(){
    ListNode* head=nullptr;


    return 0;
}   