
#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main(){
        ll n,k;cin>>n>>k;
        ll dp[n];
        dp[0]=0;
        for(int i=1;i<n;i++){
            for(int j=1;j<=k;j++){
                if((i-j)>=0)
                    dp[i]+=dp[j];
            }
        }
        for(int i=0;i<n;i++){
            cout<<dp[i]<<" ";
        }
return 0;;
}
