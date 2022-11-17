#include <iostream>
using namespace std;

class node{
  public:
  int data;
  node* next;
  
  node(int val){
    this-> data=val;
    this-> next=NULL;
  }

};

void insertathead(node* &head, int val)
{
    node* n = new node(val);
    n->next =head;
    head=n;
}

void insertatmiddle( node * &head,int pos ,int data){
  node * temp = head;
  int cntr = 1;
  while(cntr < pos-1){
    temp=temp->next;
    cntr++;
  }

  node * nodetoinsert = new node(data);
  nodetoinsert->next=temp->next;
  temp->next=nodetoinsert;

}

void insertattail(node * &tail,int d){
node * newtail = new node(d);
tail->next=newtail;
tail=tail->next;

}
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
insertatmiddle(head,2,14);
display(head);

}
