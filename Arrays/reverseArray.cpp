#include <iostream>
#include <stdio.h>
using namespace std;

void reverseArray(int arr[],int len){
    
    // cout<<len<<endl;
    int * s = &arr[0];
    int * end=&arr[len-1];

    // logic
    while(s<end){
        int temp;
        temp=*s;
        *s=*end;
        *end=temp;
        end--;
        s++;
    }
    for(int i =0;i<len;i++){
        cout<<arr[i]<<" ";
    }
}

int main(){
    int arr[]={1,2,3,4,5,6};
    int len=sizeof(arr)/sizeof(int);
    reverseArray(arr,len);

}