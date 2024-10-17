#include<bits/stdc++.h>
using namespace std;
struct Node{
    int data;
    Node* next;

};
void insert(Node* &head,int data){
    Node* newNode=new Node();
    newNode->data=data;
    newNode->next=nullptr;
    newNode->next=head;
    head=newNode;
}
void deletionAtTail(Node* &head,int size){
    Node* temp=head;
    for(int i=0;i<size-2;i++){
        temp=temp->next;
    }
    delete temp->next;
    temp->next=nullptr;
}
void print(Node* head){
    Node* temp=head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    


}
int main(){
    Node* head=nullptr;
    int data,size;
    cin>>size;
    for(int i=0;i<size;i++){
        cin>>data;
        insert(head,data);
    }
    deletionAtTail(head,size);
    print(head);
}