#include <iostream>
using namespace std;

class stack{
    public:
    int *arr;
    int top;
    int size;

    // constructor
    stack(int size){
        this->size=size;
        arr = new int[size];
        top=-1;
    }

    // push 
    void push(int val){
        if(size-top>1){
            top++;
            arr[top]=val;
        }
        else{
            cout<<"Stack Overflow"<<endl;
        }
    }
    // pop 
    void pop(){
        if(top>=0){
            top--;
        }
        else{
            cout<<"Stack Underflow"<<endl;
        }
    }

    //  returns the value of the top
    int peek(){
        if(top>=0){
            return arr[top];
        }
        else{
            cout<<"Stack is empty"<<endl;
            return -1;
        }
    }

    //  checks whether the stack is empty or not ?
    bool isempty(){
        if(top==-1){
            return true;
        }
        else{
            return false;
        }
    }
    // 
};

int main(){
    stack st(5);
    st.push(1);
    st.pop();
    cout<<st.peek()<<endl;
}

