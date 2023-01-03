#include <iostream>
using namespace std;

void insertion(int arr[],int len){
    for(int i=1;i<len;i++){
        int temp=arr[i];
        int j=i-1;

        while(j>=0){
          if( arr[j]>temp){
            arr[j+1]=arr[j];
          }
          else{
            break;
          }
        }
        arr[j+1]=temp;

    }
}
int main(){}