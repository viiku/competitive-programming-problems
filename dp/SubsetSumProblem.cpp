#include<bits/stdc++.h>
using namespace std;
//Recursive Approach
// bool subsetsum(int a[],int n,int sum){
//     if(n==0 && sum>0){
//         return false;
//     }else if(sum==0){
//         return true;
//     }else if(a[n-1]>sum){
//         return subsetsum(a,n-1,sum);
//     }else{
//         return subsetsum(a,n-1,sum-a[n-1]) or subsetsum(a,n-1,sum);
//     }
//     return false;
// }
//DP Approach
void subsetsum(int a[],int n,int sum){
    bool dp[n+1][sum+1];
    for(int i=0;i<n+1;i++){
        for(int j=0;j<sum+1;j++){
            if(i==0 && j!=0){
                dp[i][j]=false;
            }else if(j==0){
                dp[i][j]=true;
            }
        }
    }
    for(int i=1;i<n+1;i++){
        for(int j=1;j<sum+1;j++){
            if(a[i-1]>j){ 
                dp[i][j]=dp[i-1][j];
            }else{
                dp[i][j]=dp[i-1][j] || dp[i-1][j-a[i-1]];
            }
        }
    }
    // return dp[n][sum];
    for(int i=0;i<n+1;i++){
        for(int j=0;j<n;j++){
            cout<<dp[i][j]<<" ";
        }
        cout<<"\n";
    }
}
int main(){
    int n,sum;
    cin>>n>>sum;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    subsetsum(a,n,sum);
    // if(subsetsum(a,n,sum)){
    //     cout<<"YES\n";
    // }else{
    //     cout<<"NO\n";
    // }
}
