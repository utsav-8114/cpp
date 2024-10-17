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
void deletion(Node* &head){
    Node* temp=head;
    head=head->next;
    delete temp;
    

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
    deletion(head);
    print(head);
}