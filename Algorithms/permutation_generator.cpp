#include <iostream>
using namespace std;

void perm(string arr,int start,int end){
    
    if(start==end){
            cout<<arr<<" ";
    }
    for(int j=start;j<=end;j++){
        swap(arr[j],arr[start]);
        perm(arr,start+1,end);
        swap(arr[j],arr[start]);   
        
    }
  
}
int main(){ 
    string arr="ABCD";
    perm(arr,0,3);

}
