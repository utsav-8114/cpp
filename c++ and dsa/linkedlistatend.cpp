#include<bits/stdc++.h>
using namespace std;
struct Node{
    int data;
    Node* next;
};
void insertAtend(Node*& head , int data){
    Node*  newNode= new Node();//creating a new node;
    newNode->data=data;//assigning data to the node and newnode is the pointer to the new node;
    newNode->next=nullptr;//setting next pointer to null;
    if(head==nullptr){
        head=newNode;
    }else{
        Node* temp=head;
        while(temp->next!=nullptr){
            temp=temp->next;
            
        }
        temp->next=newNode;
    }


}
void printlist(Node*head){
    Node* temp =head;
    while(temp!=nullptr){
        cout<<temp->data<<"->";
        temp=temp->next;
    }
    cout<<"NULL"<<endl;
}
int main(){
    Node* head=nullptr;
    int n,value;
    cout<<"enter the number of nodes: ";
    cin>>n;
    for(int i=0;i<n;i++){
        cout<<"enter the value of "<<i+1<<"node: ";
        cin>>value;
        insertAtend(head,value);

    }
    cout<<"the linked list is: ";
    printlist(head);
    return 0;
}