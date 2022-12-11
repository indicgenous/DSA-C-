#include <iostream>
using namespace std;

class queue{
    public:
    int *arr;
    int rear;
    int front;
    int size;

    // constructor
    queue(int size){
        this->size=size;
        arr=new int[size];
        front=0;
        rear=0;
    }

//  Insertion in a queue
void enque(int val){
    if(rear==size)
        cout<<"Queue is full"<<endl;
    else{
        arr[rear]=val;
        rear++;
        
    }
}

// deletion in a queue
void dqueue(){
    if(front==rear){
        cout<<"The queue is empty"<<endl;
    }
    else{
        arr[front]=-1;
        front++;
        if(front==rear){
            front=0;
            rear=0;
        }
    }
}

// returns the first element of the queue
int frontz(){
    if(front==rear){
        return -1;
    }
    else{
        return arr[front];
    }
}

// checks if the queue is empty or not
bool isempty(){
    if(front==rear){
        return true;
    }
    else{
        return false;
    }

}
  
// void display(){
//     for(int i =0;i<size;i++){
//         cout<<arr[i]<<"  ";
//     }
// }

};

int main(){
    queue que(10);
    que.enque(1);
    que.enque(2);
    que.enque(3);
    que.dqueue();
    cout<<que.frontz()<<endl;
    cout<<que.isempty()<<endl;
    // que.display();
}