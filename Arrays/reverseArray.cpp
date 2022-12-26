#include <iostream>
#include <stdio.h>
using namespace std;



//  with pointers

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
    cout<<endl;
}

// without pointers

void arrayreverse(int arr[],int len){
    int s=0;
    int e=len-1;
    while(s<e){
        int temp =arr[e];
        arr[e]=arr[s];
        arr[s]=temp;
        s++;
        e--;
    }
    for(int i=0;i<len;i++){
        cout<<arr[i]<<" ";
    }
}

int main(){
    int arr[]={1,2,3,4,5,6};
    int arr1[]={1,2,3,4,5,6};
    int len=sizeof(arr)/sizeof(int);
    reverseArray(arr,len);
    arrayreverse(arr1,len);

}