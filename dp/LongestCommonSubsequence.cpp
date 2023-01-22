/* Date:22-04-2021 */
/* Time:20:13:02 */
#include<bits/stdc++.h>
using namespace std;
void longestcommonsubsequence(int a[],int b[],int n,int m){
    // if(n==0 || m==0){
    //     return 0;
    // }

    // if(a[n-1]==b[m-1]){
    //     return longestcommonsubsequence(a,b,n-1,m-1)+1;
    // }else{
    //     return max(longestcommonsubsequence(a,b,n-1,m),longestcommonsubsequence(a,b,n,m-1));
    // }

    int dp[n+1][m+1];
    for(int i=0;i<=n;i++){
        for(int j=0;j<=m;j++){
            dp[0][j]=0;
            dp[i][0]=0;
        }
    }
    for(int i=1;i<=n;i++){
        for(int j=1;j<=m;j++){
            if(a[i-1]==b[j-1]){
                dp[i][j]=dp[i-1][j-1];
            }else{
                dp[i][j]=max(dp[i-1][j],dp[i][j-1]);
            }
        }
    }
    // return dp[n][m];   
    // for(int i=0;i<=n;i++){
    //     for(int j=0;j<=m;j++){
    //         cout<<dp[i][j]<<" ";
    //     }
    //     cout<<endl;
    // }
    // for(int i:v){
    //     cout<<i<<" ";
    // }
}
void solve(){
    int n,m;cin>>n>>m;
    int a[n],b[m];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    for(int i=0;i<m;i++){
        cin>>b[i];
    }
    longestcommonsubsequence(a,b,n,m);
}
int main(){
       solve();
}
