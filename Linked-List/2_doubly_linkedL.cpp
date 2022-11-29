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
//   if head is NULL
   if(head==NULL){
    node * newhead=new node(val);
    head=newhead;
   }
    else{
        node * newhead= new node(val);
        newhead -> next=head;
        head -> prev=newhead;
        head = newhead;
    }
}

// inserting a new node at tail
void insertattail(node * &head,node * &tail,int val){
    // if tail is NULL
    if(tail==NULL){ 
        node * newail = new node(val);
        tail=newail;
        head = tail;
    }
    else{
        node * newtail = new node(val);
        tail->next=newtail;
        newtail->prev=tail;
        tail=newtail;
    }
}
// insert at any position 
void insertany(node * &head,node * &tail,int pos ,int val){
   
    if(pos==1){
        insertathead(head,val);
        return;
    }

    node *temp =head;
    int cntr=1;
    while(cntr <pos-1){
        temp=temp->next;
        cntr++;
    }

    if(temp->next==NULL){
        insertattail(head,tail,val);
        return;
    }
    
    // main logic 
    node * newnode = new node(val);
    newnode->next=temp->next;
    temp->next->prev=newnode;
    temp->next=newnode;
    newnode->prev=temp;
}

void deletion(node * &head){

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
    // node * newnode = new node(1);
    node * head =NULL;
    node * tail = NULL;
    // display(head);
    // insertathead(head,2);
    // display(head);
    // insertattail(head,tail,1);
    // display(head);
    // size(head);
    // insertany(head,tail,2,99);
    // display(head);

    insertattail(head,tail,1);
    display(head);
    insertattail(head,tail,2);
    display(head);
    insertathead(head,0);
    display(head);
}