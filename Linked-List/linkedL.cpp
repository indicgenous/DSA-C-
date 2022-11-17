#include <iostream>
using namespace std;

class node{
  public:
  int data;
  node* next;
  
  // constructor
  node(int val){
    this-> data=val;
    this-> next=NULL;
  }

};

//  inserting at the head
void insertathead(node* &head, int val)
{
    node* n = new node(val);
    n->next =head;
    head=n;
}

// inserting at tail
void insertattail(node * &tail,int d){
node * newtail = new node(d);
tail->next=newtail;
tail=tail->next;

}

// inserting at middle or given position
void insertatmiddle( node * &head,node* tail,int pos ,int data)  { 
  
  //  inserting at the head position
  if (pos==1){
    insertathead(head,data);
    return;
  }

  node * temp = head;
  int cntr = 1;
  while(cntr < pos-1){
    temp=temp->next;
    cntr++;
  }

  //  inserting at tail position 
  if( temp->next==NULL){
    insertattail(tail,data);
    return;
  }

  node * nodetoinsert = new node(data);
  nodetoinsert->next=temp->next;
  temp->next=nodetoinsert;

}

//  to display the whole Linked list using the HEAD
void display(node* head){
    node* temp =head;
    while (temp != NULL)
    { cout << temp -> data << " -> ";
    temp=temp->next; }
    cout << "NULL"<< endl;  
}
int main(){

node * node1=new node(10);
node * head =node1;
node * tail =node1;
display(head);
insertathead(head,12);
display(head);
insertathead(head,15);
display(head);
insertattail(tail,9);
display(head);
insertatmiddle(head,tail,2,14);
display(head);

cout << "head " <<head->data<<endl;
cout << "tail " <<tail->data<<endl;

}
