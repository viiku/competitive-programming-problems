/* Date:23-03-2021 */
/* Time:23:49:29 */
#include<bits/stdc++.h>
using namespace std;
#define IOS ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);
int main(){
    IOS;
    int n;cin>>n;
    int a[n-1],mex[n+1]={0};
    for(int i=1;i<n;i++){
        cin>>a[i];
        if(a[i]<=n){
            mex[i]=1;
        }else if(a[i]>n){
            mex[i]=-1;
        }
    }
    for(int i=1;i<=n+1;i++){
        // if(mex[i]==0){
        //     cout<<i<<endl;
        //     break;
        // }
        cout<<mex[i]<<" ";
    }
}