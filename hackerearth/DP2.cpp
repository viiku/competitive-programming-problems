#include<bits/stdc++.h>
using namespace std;
int main(){
    string str,str1;cin>>str>>str1;
    int n=str.size();
    int m=str1.size();
    int dp[n][m];
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(i==0 || j==0){
                dp[i][j]=i+j;
                continue;
            }

            if(str[i-1]==str1[j-1]){
                dp[i][j]=dp[i-1][j-1];
            }else{
                dp[i][j]=min(dp[i-1][j-1],dp[i-1][j],dp[i,j-1])+1;
            }
        }
    }
    for(int i=0;i<str.size();i++){
        for(int j=0;j<str1.size();j++){
            cout<<dp[i][j]<<" ";
        }
        cout<<"\n";
    }
    return 0;
}