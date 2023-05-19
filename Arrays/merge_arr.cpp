#include <iostream>
using namespace std;


// merge two sorted arrays

void merge_arr(int a[],int b[],int lena,int lenb){
    int arrc[lena+lenb];
    int k=0 ,j=0,i=0;

   while(i<lena && j<lenb)
        {
            if (a[i] < b[j]) {
                arrc[k++]=a[i++];
               
            }
            else {
                arrc[k++]=b[j++];
              
            }
        }

        while(i<lena){
            arrc[k++]=a[i++];
        }

        while(j<lenb){
            arrc[k++]=b[j++];
        }


    for(int i=0;i<(lena+lenb);i++){
        cout<<arrc[i]<<" ";
    }
}

int main(){

int a[]={1,3,5,7};
int b[]={2,4,6};
int lena=4,lenb=3;
merge_arr(a,b,lena,lenb);

}