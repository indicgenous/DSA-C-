#include <iostream>
using namespace std;

// Logic to find the smallest number in the array

void smallestnum(int arr[],int len){
int smallest =arr[0];
for(int i = 0;i<len;i++){
    if(arr[i]<smallest){
        int temp = smallest;
        smallest = arr[i];
        arr[i]=temp;
    }
}
cout <<"The smallest number in the given array is : "<< smallest<<endl;

}

int main(){
    int arr[]={1,2,5,4,9,0,-2,-1,-55,-99};
    int len= (sizeof(arr)/sizeof(int));
    smallestnum(arr,len);
}