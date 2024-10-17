#include<bits/stdc++.h>
using namespace std;
struct Node{
    int data;
    Node* next;
};
void  insertAtbeginning(Node*&head,int value){
    Node* newNode=new Node();
    newNode->data=value;
    newNode->next=nullptr;
    newNode->next=head;
    head=newNode;
    
}
void print(Node*head){
    Node* temp=head;
    while(temp!=nullptr){
        cout<<temp->next<<" ";
        temp=temp->next;
    }
}