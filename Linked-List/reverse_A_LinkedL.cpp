#include <iostream>
using namespace std;


class node{
    public:
    int data;
    node * next;

    node(int val){
        this->data=val;
        this->next=NULL;
    }
};

void insertathead(node * &head,int val){
    node * newnode = new node(val);
    newnode->next=head;
    head=newnode;
}
void display(node * &head){
    node * temp = head;
    while ((temp!=NULL)){
        cout<<temp->data<<" -> ";
        temp=temp->next;
    }
    cout<<"NULL"<<endl;
}

// ******************************************************************************************************************** \\ 
// ******************************************************************************************************************** \\ 
//  reverse a liked list

node * reversell(node * &head){
    if(head==NULL || head->next==NULL){
        return head;
    }
    node * prev =NULL;
    node * current =head;

    while(current!=NULL){
        node * forward = current->next;
        current->next=prev;
        prev=current;
        current=forward;
    }
    head=prev;
    return head;
}

// ******************************************************************************************************************** \\ 
// ********************************************************************************************************************  \\ 

int main(){
    node * newnode=new node(5);
    node *head=newnode;
    insertathead(head,4);
    insertathead(head,3);
    display(head);
    cout<<endl;
    reversell(head);
    display(head);
    cout<<head->data<<endl;
}
