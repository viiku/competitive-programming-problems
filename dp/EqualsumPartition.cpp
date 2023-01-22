  #include<bits/stdc++.h>
using namespace std;
//Recursive Method
// bool Equalsumpartition(int a[],int n,int sum){
//     if(sum==0){
//         return true;
//     }
//     if(n==0 && sum!=0){
//         return false;
//     }
//     if(a[n-1]>sum){
//         return Equalsumpartition(a,n-1,sum/2);
//     }else{
//         return Equalsumpartition(a,n-1,sum/2) || Equalsumpartition(a,n-1,(sum/2)-a[n-1]);
//     }
//     return false;
// }
//DP method
void equalsumpartition(int a[],int n,int sum){
    bool dp[n+1][sum+1];
    for(int i=0;i<n+1;i++){
        for(int j=0;j<sum+1;j++){
            if(i==0 && j!=0){
                dp[i][j]=false;
            }else if(j==0){
                dp[i][j]=true;
            }
        }
    }
    for(int i=1;i<n+1;i++){
        for(int j=1;j<sum+1;j++){
            if(a[i]-1>j){
                dp[i][j]=dp[i-1][j];
            }else{
                dp[i][j]=dp[i-1][j-a[i-1]] || dp[i-1][j];
            }
        }
    }
    for(int i=0;i<n+1;i++){
        for(int j=0;j<sum+1;j++){
            cout<<dp[i][j]<<" ";
        }
        cout<<"\n";
    }
}
int main(){
    int n;cin>>n;
    int a[n],sum=0;
    for(int i=0;i<n;i++){
        cin>>a[i];
        sum+=a[i];
    }
    equalsumpartition(a,n,sum/2);
    // if(sum%2==0){
    //     if(equalsumpartition(a,n,sum/2)){
    //         cout<<"Yes\n";
    //     }else{
    //         cout<<"No\n";
    //     }
    // }else{
    //     cout<<"No\n";
    // }
}