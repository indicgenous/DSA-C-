#include<bits/stdc++.h>
using namespace std;

void greedy_coin_change(int v){
    int c[]={1,2,5,10,20,50,100,500,1000};
    int ans[100];
    int ind=0;
    for(int i=8;i>=0;i--){
        while(v>=c[i]){
            v=v-c[i];
            ans[ind++]=c[i];

        }
    }

    for(int j =0;j<ind;j++){
        cout<<ans[j]<<" ";
    }
}
int main(){
    int v=3;
    greedy_coin_change(v);
}