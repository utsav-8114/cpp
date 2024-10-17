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