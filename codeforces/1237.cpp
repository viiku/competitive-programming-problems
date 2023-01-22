#include<bits/stdc++.h>
using namespace std;
int LongestSubstr(int m,int n,string str,string str1){
    int dp[m+1][n+1];
    int result=0;
    for(int i=0;i<=m;i++){
        for(int j=0;j<=n;j++){
            if(i==0 || j==0){
                dp[i][j]=0;
            }else if(str[i-1]==str1[j-1]){
                dp[i][j]=dp[i-1][j-1]+1;
                result=max(result,dp[i][j]);
            }else{
                dp[i][j]=0;
            }
        }
    }
    return result;
}
int main(){
    string str,str1;
    getline(cin,str);
    getline(cin,str1);
    int m=str.size();
    int n=str1.size();
    cout<<LongestSubstr(m,n,str,str1)<<"\n";
}