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
void deletionAtk(Node* &head,int position){
    Node* temp = head;
    int counter=0;
    Node* prev=NULL;
    while(temp!=nullptr){
        counter++;
        if(counter==position){
            prev->next=prev->next->next;
            delete temp;
            break;
        }
        prev=temp;
        temp=temp->next;
    }
    
    
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
    int data,size,position;
    cin>>size;
    for(int i=0;i<size;i++){
        cin>>data;
        insert(head,data);
    }
    cout<<"enter the element u want to delete: ";
    cin>>position;
    deletionAtk(head,position);
    print(head);
}