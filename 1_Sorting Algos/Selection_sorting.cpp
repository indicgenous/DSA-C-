#include <iostream>
using namespace std;


//  selection Sorting
void selection(int arr[],int len){
    for(int i=0;i<len;i++){
        int min=i;
        for(int j=i+1;j<len;j++){
            if(arr[j]<arr[min]){
                int temp=arr[j];
                arr[j]=arr[min];
                arr[min]=temp;
            }

        }
        cout<<arr[i]<<" ";
    }
    // for (int k = 0; k < len; k++)
    // {
    //     /* code */
    //     cout<<arr[k]<<" ";
    // }
    
}

int main(){
    int arr[]={5,1,8,2,3,4,7,0,10,55,2};
    int len=(sizeof(arr)/sizeof(int));
    selection(arr,len);
}