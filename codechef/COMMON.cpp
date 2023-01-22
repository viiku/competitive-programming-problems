#include<bits/stdc++.h>
using namespace std;
int dp[5000+1][5000+1];
void lcs(string str,string str1,int n,int m){
    int result=0;
    memset(dp,-1,sizeof(5001));
    for(int i=0;i<=n;i++){
        for(int j=0;j<=m;j++){
            if(i==0 || j==0){
                dp[i][j]=0;
            }else if(dp[i][j]==dp[i-1][j-1]){
                dp[i][j]=dp[i-1][j-1]+1;
            }else{
                
            }
        }
    }
}
int main(){
    string str,str1;cin>>str>>str1;
    int n=(int)str.size();
    int m=(int)str1.size();
}