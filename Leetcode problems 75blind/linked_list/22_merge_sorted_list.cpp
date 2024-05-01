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

ListNode* mergeTwoLists(ListNode* list1, ListNode* list2){
    if(list1==nullptr) return list2;
    else if(list2==nullptr) return list1;

    ListNode* head=nullptr;

    if(list1->val > list2->val){
        head=list2;
        list2=list2->next;
    }
    else{
        head=list1;
        list1=list1->next;
    }

    ListNode* curr=head;

    while(list1 && list2){
        if(list1->val > list2->val){
            curr->next=list2;
            list2 = list2->next;
        }
        else{
            curr->next = list1;
            list1 = list1->next;
        }
        curr=curr->next;
    }
    if(!list1){
        curr->next=list2;
    }
    else{
        curr->next=list1;
    }

    return head;
}

int main(){
    ListNode* list1=nullptr;
    ListNode* list2=nullptr;

    list1 = insert(list1, 1);
    list1 = insert(list1, 2);
    list1 = insert(list1,4);

    list2 = insert(list2, 1);
    list2 = insert(list2, 3);
    list2 = insert(list2, 4);

    display(list1);
    display(list2);

    ListNode* head = mergeTwoLists(list1, list2);

    display(head);

    return 0;
}