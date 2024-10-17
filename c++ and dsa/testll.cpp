// You are using GCC
#include<bits/stdc++.h>
using namespace std;
struct Node{
    int data;
    Node* next;
};
void  insert(Node*&head,int value){
    Node* newNode=new Node;
    newNode->data=value;
    newNode->next=nullptr;
    Node*temp=head;
    while(temp->next!=nullptr){
        
        temp=temp->next;
    }
    temp->next=newNode;
}
/*void swap(Node* &head){
    
    Node*curr=head;
    Node*prev=NULL;
    Node*next=NULL;
    while(curr!=nullptr and curr->next!=nullptr){
        next=curr->next;
        curr->next=next->next;
        next->next=curr;
    }
    
}*/
void print(Node* head){
    Node* temp=head;
    while(temp!=nullptr){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    cout<<endl;
}
int main(){
    Node* head=NULL;
    int size;
    cin>>size;
    for(int i=0;i<size;i++){
        int value;
        cin>>value;
        insert(head,value);
    }
     cout<<"Before swapping: ";
     print(head);
     //swap(head);
     cout<<"After swapping: ";
     print(head);
     return 0;
}
