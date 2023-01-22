#include<bits/stdc++.h>
using namespace std;
int cnt=0;
int CountSubsetWithGivenSum(int a[],int n,int sum){
    if(n==0 && sum==0){
        cnt++;
        return CountSubsetWithGivenSum(a,n,sum);
    }else if(a[n-1]>sum){
        return CountSubsetWithGivenSum(a,n-1,sum);
    }else{
        return cnt+=CountSubsetWithGivenSum(a,n-1,sum-a[n-1])+CountSubsetWithGivenSum(a,n-1,sum);
    }
    return cnt; 
}
// void CountSubsetWithGivenSum(int a[],int n,int sum){
//     int dp[8][11];
//     for(int i=0;i<n+1;i++){
//         for(int j=0;j<sum+1;j++){
//             if(i==0 && j!=0){
//                 dp[i][j]=0;
//             }else if(j==0){
//                 dp[i][j]=1;
//             }
//         }
//     }
//     for(int i=1;i<n+1;i++){
//         for(int j=1;j<sum+1;j++){
//             if(a[i-1]>j){
//                 dp[i][j]=dp[i-1][j];
//             }else{
//                 dp[i][j]=dp[i-1][j]+dp[i-1][j-a[i-1]];
//             }
//         }
//     }
//     for(int i=0;i<n+1;i++){
//         for(int j=0;j<sum+1;j++){
//             cout<<dp[i][j]<<" ";
//         }
//         cout<<"\n";
//     }
// }
int main(){
    int n,sum;cin>>n>>sum;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    cout<<CountSubsetWithGivenSum(a,n,sum);
}