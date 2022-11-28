#include <iostream>
using namespace std;

class node{
    public:
    int data;
    node * next;
    node * prev;

    // constructor
    node(int val){
        this->data=val;
        this->prev=NULL;
        this->next=NULL;
    }
};

// insertion at head 
// inserting a new node at the head position
void insertathead(node * &head,int val){
    node * newhead= new node(val);
    newhead -> next=head;
    head -> prev=newhead;
    head = newhead;
}

// inserting a new node at tail
void insertattail(node * &tail,int val){
    node * newtail = new node(val);
    tail->next=newtail;
    newtail->prev=tail;
    tail=newtail;
}

// displays the linked list
void display(node * &head){
    node * temp =head;
    while(temp!=NULL){
        cout<<temp->data<<" -> ";
        temp=temp->next;
    }
    cout<<"NULL"<<endl;
}

// size of the linked list
void size(node * &head){
    node * temp =head;
    int size=0;
    while(temp!=NULL){
        size++;
        temp=temp->next;
    }
    cout<<"   The size of the Linked list is :: "<<size<<endl;
}

int main(){
    node * newnode = new node(1);
    node * head =newnode;
    node * tail = newnode;
    display(head);
    insertathead(head,2);
    display(head);
    insertattail(tail,0);
    display(head);
    size(head);
}