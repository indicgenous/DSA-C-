#include <iostream>
using namespace std;

// void merge(int arr[], int s, int e){
//     int mid = (s+e)/2;
//     int len1=mid-s+1;
//     int len2=e-mid;
//     int first[len1];
//     int second[len2];

//     //  copy first array
//     int k=s;
//     for(int i=0;i<len1;i++){
//         first[i]=arr[k++];
//     }

//     // copy second arr
//     k=mid+1;
//     for(int i=0;i<len2;i++){
//         second[i]=arr[k++];
//     }

//     // merge two sorted arrays
//     int index1=s;
//     int index2=s;
//    k=s;
    
//     while(index1<len1 && index2 <len2 ){
//         if(first[index1]<second[index2]){
//             arr[k++]=first[index1++];
//         }
//         else{arr[k++]=second[index2++];}
//     }
//     while(index1<len1){
//         arr[k++]=first[index1++];
//     }
//     while(index2<len2){
//         arr[k++]=second[index2++];
//     }
     
// }


// void merge_sort(int arr[],int s,int e){
//     if(s>=e){
//         return ;
//     }

//     int mid = (s+e)/2;
//     merge_sort(arr,s,mid);
//     merge_sort(arr,mid+1,e);
//     merge(arr,s,e);

// }



void merge(int arr[],int s,int e){
    int mid = (s+e)/2;
    int len1=mid-s+1;
    int len2=e-mid;
    int left[len1];
    int right[len2];


    // copy arr half in left;
    int mainindex =s;
    for(int i =0;i<len1;i++){
        left[i]=arr[mainindex++];
    }
    // copy in right arr
    mainindex=mid+1;
    for(int i =0 ; i <len2;i++){
        right[i]=arr[mainindex++];
    }

    //  merging two arrays
    int index1=0,index2=0;
    mainindex=s;
    while(index1<len1 && index2<len2){
        if(left[index1]<right[index2]){
            arr[mainindex++]=left[index1++];
        }
        else{arr[mainindex++]=right[index2++];}
    }
    while(index1<len1){
        arr[mainindex++]=left[index1++];
    }
    while(index2<len2){
        arr[mainindex]=right[index2++];
    }

}

void mergesort(int arr[],int s,int e){
    if(s>=e){
        return;
    }
    int mid = (s+e)/2;
    mergesort(arr,s,mid);
    mergesort(arr,mid+1,e);
    merge(arr,s,e);
}

int main(){
        int arr[]={5,4,1,2,6};
        mergesort(arr,0,4);

        for(int i=0;i<5;i++){
            cout<<arr[i]<<" ";
   }

}