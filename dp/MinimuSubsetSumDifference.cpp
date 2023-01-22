#include<bits/stdc++.h>
using namespace std;
void MinimumSubsetDifference(int a[],int n,int sum){
    int dp[n+1][sum+1];
    for(int i=0;i<n+1;i++){
        for(int j=0;j<sum+1;j++){
            if(i<2){
                dp[i][j]=0;
            }else if(j<2){
                dp[i][j]=0;
            }
        }
    }
    for(int i=2;i<n+1;i++){
        for(int j=2;j<sum+1;j++){
            if(a[i-1]>j){
                dp[i][j]=dp[i-1][j];
            }else{
                dp[i][j]=dp[i-1][j-a[i-1]]+dp[i-1][j];
            }
        }
    }
    for(int i=0;i<n+1;i++){
        for(int j=0;j<sum+1;j++){
            cout<<dp[i][j];
        }
        cout<<"\n";
    }
}
int main(){
    int n,sum=0;cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
        sum+=a[i];
    }
    MinimumSubsetDifference(a,n,sum);
    // cout<<MinimumSubsetDifference(a,n,sum/2);
}