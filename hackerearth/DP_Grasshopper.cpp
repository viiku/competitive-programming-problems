#include<bits/stdc++.h>
using namespace std;
int main(){
//A Grasshopper is initially at i=0,and it can only move to i+1
// or to i+2. We've to find out total number of different path 
//to reach the last cell(n).
//    int n,k;cin>>n>>k;
    int n,m;cin>>n>>m;
//    int c[n],dp[n];
//    for(int i=0;i<n;i++) cin>>c[i];
//    dp[0]=1;dp[1]=1;dp[2]=2; 
//    int sum=0;
/*    for(int i=2;i<n;i++){
        dp[i]=dp[i-1]+dp[i-2];
    }
    cout<<dp[n-1]<<"\n";
//if a grasshopper can jump to i+3 too then
    for(int i=3;i<n;i++){
        dp[i]=dp[i-1]+dp[i-2]+dp[i-3];
    }
    cout<<dp[n-1]<<"\n"; */ 
//if he can make maximum jump to i+1,i+2,i+3 ........i+k cell
 /*   dp[0]=1;
    for(int i=1;i<=n-1;i++){
        for(int j=1;j<=k;j++){
            if(i-j>=0){
                dp[i]+=dp[i-j];
            }
        }
    }
    for(int i=0;i<n;i++){
        cout<<dp[i]<<" ";
    } */

//Optimizing grasshopper problems;

//Now some amount of money is assigned to each cell,
//now grasshopper has to find the path such that it jumps to 
//either i+1 or i+2 which costs minimum amount of money. 
/*    dp[0]=0;dp[1]=c[1];
    for(int i=2;i<n;i++){
        dp[i]=min(dp[i-1],dp[i-2])+c[i];
        cout<<dp[i]<<" ";
    }*/
//dp[n] would represent the total value of coins that is spent 
//till n.
//if it can jump from i+1,i+2,i+3......................i+k
//Then we have to find out minimum of k values 
/*    dp[0]=0;
    int path[n];
    for(int i=1;i<n;i++){
        dp[i]=INT_MAX;
        for(int j=1;j<k;j++){
            if(i-j>=0){
                dp[i]=min(dp[i],dp[i-j]+c[i]);
            }
        }
        cout<<dp[i]<<" ";
    }*/
/*    dp[0]=0;
    int path[n];
      for(int i=1;i<n;i++){
        dp[i]=INT_MAX;
        for(int j=1;j<k;j++){
            if(i-j>=0){
                if(dp[i-j]+c[i]<dp[i]){
                    dp[i]=dp[i-j]+c[i];
                    path[i]=i-j;
                }
            }
        }
    }
    for(int i=0;i<n;i++){
        cout<<path[i]<<" "; 
    }*/
    int dp[n][m],c[n][m];
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>c[i][j];
        }
    }
    dp[0][0]=0;
    for(int i=1;i<n;i++){
        for(int j=1;j<n;j++){
            dp[i][j]+=max(dp[i-1][j],dp[i][j-1])+c[i][j];
            cout<<dp[i][j]<<" ";
        }
        cout<<"\n";
    }
//      
} 