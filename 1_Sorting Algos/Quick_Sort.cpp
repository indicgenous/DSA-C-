#include <iostream>
using namespace std;

int partition(int arr[],int start,int end){
    int pivot = arr[end];
    int pin=start;
    for(int i=start;i<end;i++){
        if(arr[i]<=pivot){
            int temp = arr[i];
            arr[i]=arr[pin];
            arr[pin]=temp;
            pin++;
        }
    }
    int temp = arr[end];
    arr[end]=arr[pin];
    arr[pin]=temp;
    return pin;

}
void quicksort(int arr[],int s,int e){

    if(s<e){
        int pin=partition(arr,s,e);
        quicksort(arr,s,pin-1);
        quicksort(arr,pin+1,e);
    }
}


int main(){
     int arr[]={557,8,6,5,1,4,2,3,9,7,0,6,67};
    int s=0;
    int e=13;
    quicksort(arr,0,13);
    for(int i=0;i<14;i++) cout<<arr[i]<<" ";
}