#include<bits/stdc++.h>
using namespace std;
int main(){
    int t,n;cin>>t;while(t--){
        cin>>n;
        int dp[n];
        dp[0]=1,dp[1]=2;dp[2]=4;
        for(int i=3;i<=n;i++){
            dp[i]=dp[i-1]+dp[i-2]+dp[i-3];
        }
        cout<<dp[n]<<endl;
    }
}