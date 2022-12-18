#include <iostream>
using namespace std;

void bubble(int arr[],int len){
    for(int i =0;i<len;i++){
        for(int j =1;j<len;j++){
            if(arr[j]<arr[j-1]){
                int temp = arr[j];
                arr[j]=arr[j-1];
                arr[j-1]=temp;
            }
        }
    }
    for(int k=0;k<len;k++){
        cout<<arr[k]<<" ";
    }
    cout<<endl;
}

void bubble2(int arr[],int len){
    for(int i =0;i<len;i++){
        for(int j=0;j<len-i-1;j++){
            if(arr[j]>arr[j+1]){
                int temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    }
    for(int k=0;k<len;k++){
            cout<<arr[k]<<" ";
        }
    
}

int main(){
    int arr[]={557,8,6,5,1,4,2,3,9,7,0,6,67};
    int len=(sizeof(arr)/sizeof(int));
    bubble(arr,len);
    bubble2(arr,len);
}