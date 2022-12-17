#include <iostream>
using namespace std;

class node{
    public:
        int data;
        node * left;
        node * right;

node(int val){
    this->data=val;
    this->left=NULL;
    this->right=NULL;
}

};

node* buildtree(node * root){
    cout<<"Enter the data"<<endl;
    int data;
    cin>>data;
    root=new node(data);

    if(data==-1){
        return NULL;
    }

    cout<<"Enter the data to be inserted in the left of "<<data<<endl;
    buildtree(root->left);
    cout<<"Enter the data to be inserted in the right of "<<data<<endl;
    buildtree(root->right);
    return root;
}

int main(){
    node* root = NULL;
    buildtree(root);
}