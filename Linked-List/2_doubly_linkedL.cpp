#include <iostream>
using namespace std;

class node{
    public:
    int data;
    node * next;
    node * prev;

    node(int val){
        this->data=val;
        this->prev=NULL;
        this->next=NULL;
    }
};

void display(node * &head){
    node * temp =head;
    while(temp!=NULL){
        cout<<temp->data<<" -> ";
        temp=temp->next;
    }
    cout<<"NULL"<<endl;
}
void size(node * &head){
    node * temp =head;
    int size=0;
    while(temp!=NULL){
        size++;
        temp=temp->next;
    }
    cout<<size<<endl;
}

int main(){
    node * newnode = new node(1);
    node * head =newnode;
    size(head);
}