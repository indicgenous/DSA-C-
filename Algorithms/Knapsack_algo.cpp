#include <iostream>
using namespace std;

// 0/1 knapsack problem algorithm

int main(){
int p[]={0,1,2,5,6};
int w[]={0,2,3,4,5};
int m =8, n=4;
int k[5][9];

for(int i =0;i<=n;i++){
    for(int j=0;j<=m;j++){

        if(j==0 || i==0){
            k[i][j]=0;
        }
        else if (w[i]<=j){
            k[i][j]=max(((k[i-1][j-w[i]])+p[i]),k[i-1][j]);
        }
        else{k[i][j]=k[i-1][j];}

        cout<<k[i][j]<<" ";
    }
    cout<<endl;
}


}