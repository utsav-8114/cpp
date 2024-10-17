#include<bits/stdc++.h>
using namespace std;
struct Node{
    int data;
    Node* next;
};
void insert(Node*&head,int data,int position){
    Node* newNode=new Node();
    newNode->data=data;
    newNode->next=nullptr;
    if(position==0){
        newNode->next=head;
        head==newNode;
    }else{
        Node * temp=head;
        for(int i=0;i<position-1;i++){
            temp=temp->next;
        }
        newNode->next=temp->next;
        temp->next=newNode;

    }

}
void print(Node*head){
    Node*temp=head;
    while(temp!=nullptr){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    cout<<endl;
}