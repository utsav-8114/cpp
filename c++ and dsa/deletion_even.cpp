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
void deletion_at_even_pos(Node*&head){
    Node* prev=NULL;
    Node* curr=head;
    
    int count=1;
    while(curr!=nullptr){
        
        if(count%2==0){
            Node*temp=curr;
            if(prev!=nullptr){
                
                prev->next=curr->next;
                
                
            }else{
                head=curr->next;
            }
            curr=curr->next;
            delete temp;

            
            
        
        
        }else{
            prev=curr;
            curr=curr->next;
        }
        count++;
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
    int data,size;
    cin>>size;
    
    for(int i=0;i<size;i++){
        cin>>data;
        insert(head,data);
    }
    cout<<"initial list: ";
    print(head);
    cout<<endl;
    deletion_at_even_pos(head);
    cout<<"deleted list: ";
    print(head);
    cout<<endl;
    return 0;
}
