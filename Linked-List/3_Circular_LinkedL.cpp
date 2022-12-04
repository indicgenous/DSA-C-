#include <iostream>
using namespace std;

class node{
    public:
    int data ;
    node * next;

    node(int d){
        this->data=d;
        this->next=NULL;
    }
};

void insert(node * &tail,int d,int element){
    if(tail==NULL){
        node * newnode = new node(d);
        tail=newnode;
        newnode->next=newnode;
    }
    else{
        node * current = tail;
        while(current->data!=element){
            current=current->next;
        }

    }
}

