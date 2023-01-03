#include <iostream>
using namespace std;

void heapsort(int arr[],int size){
int t=size;
while(size>1){
    int temp=arr[size-1];
    arr[size-1]=arr[1];
    arr[1]=temp;
    size--;
}

for(int i ; i<t;i++){
    cout<<arr[i]<<" ";
}
cout<<endl;
}

int main(){
    int arr[]={5,1,7,6,3,2,4};
    int size=7;
    heapsort(arr,size);
}