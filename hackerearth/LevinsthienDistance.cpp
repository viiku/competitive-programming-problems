#include<bits/stdc++.h>
using namespace std;
int main(){
    string str,ptr;cin>>str>>ptr;
    int dp[str.size()][ptr.size()];
    for(int i=0;i<str.size();i++){
        for(int j=0;j<ptr.size();j++){
            if(i==0 || j==0){
                dp[i][j]=i+j;
            }

            if(str[i-1]==ptr[j-1]){
                dp[i][j]=dp[i-1][j-1];
            }else{
                dp[i][j]=min({dp[i-1][j-1],dp[i-1][j],dp[i][j-1]})+1;
            }
        }
    }
    cout<<dp[str.size()][ptr.size()];
}