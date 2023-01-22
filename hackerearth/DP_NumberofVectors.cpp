#include<bits/stdc++.h>
using namespace std;
int main(){
//We have a boolean vector like this,which  elements are 
//010000101010010101010100 in which no two adjecent element 
//are 1 and 1. We've find out number of different 
//vectors in such a way.
    int n;cin>>n;
    int dp[10]={0,1,0,0,0,1,0,0,1,0};
    int sum1=0,sum=0;
    if(dp[0]==0){
        dp[1]=2;
        for(int i=2;i<n;i++){
            dp[i]=dp[i-1]+dp[i-2];
            cout<<dp[i]<<" ";
        }
        cout<<"\n"<<dp[n-1]<<"\n";
    }else if(dp[0]==1){
        dp[1]=1;
        for(int i=2;i<n;i++){
            dp[i]=dp[i-1]+dp[i-2];
            cout<<dp[i]<<" ";
        }
        cout<<"\n"<<dp[n-1]<<"\n";
    }
    return 0;
}