#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,k;cin>>n>>k;
    int dp[n];
    dp[0]=1;
    for(int i=1;i<n;i++){
        for(int j=1;j<k;j++){
            if(i-j>=0){
                dp[i]+=dp[j];
            }
        }
    }
    for(int i=0;i<n;i++){
        cout<<dp[i]<<" ";
    }
    return 0;
}