#include<bits/stdc++.h>
using namespace std;
int lcs(int a[],int b[],int n){
    int dp[2][n+1];
    bool ok;
    for(int i=0;i<=n;i++){
        ok=i&1;
        for(int j=0;j<=n;j++){
            if(i==0 || j==0){
                dp[ok][j]=0;
            }else if(a[i-1]==b[j-1]){
                dp[ok][j]=1+dp[1-ok][j-1];
            }else{
                dp[ok][j]=max(dp[1-ok][j],dp[ok][j-1]);
            }
        }
    }
    return dp[ok][n];
}
int main(){
    int n;cin>>n;
    int a[n],b[n];
    for(int i=0;i<n;i++){
        cin>> a[i];
    }
    for(int i=0;i<n;i++){
        cin>>b[i];
    }
    cout<<lcs(a,b,n);
}