#include<bits/stdc++.h>
using namespace std;
struct Node{
    int data;
    Node* next;
};
void swap(Node*&head){
    if(head==NULL || head->next==NULL){
        return;//no swap needed;
    }
    //pointer initialize
    Node* prev=NULL;
    Node* curr=head;
    Node* next=NULL;
    head=curr->next;
    while(curr!=NULL and curr->next!=NULL){
        next=curr->next;
        curr->next=next->next;
        next->next=curr;
    }
    if(prev!=NULL){
        prev->next=next;
    }
    prev=curr;
    curr=curr->next;
}
void insert(Node* &head,int data){
    Node *newNode=new Node();
    newNode->data=data;
    newNode->next=nullptr;
    newNode->next=head;
    head=newNode;
}
void print(Node* head){
    Node* temp=head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    cout<< endl;
}
int main(){
    Node* head = NULL;

    // Create list 10 -> 15 -> 12 -> 13 -> 20 -> 14
    insert(head, 14);
    insert(head, 20);
    insert(head, 13);
    insert(head, 12);
    insert(head, 15);
    insert(head, 10);

    cout << "Original list: ";
    print(head);

    // Swap nodes in pairs
    swap(head);

    cout << "List after swapping nodes in pairs: ";
    print(head);

    return 0;
}
