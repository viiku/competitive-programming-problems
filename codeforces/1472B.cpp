#include<bits/stdc++.h>
using namespace std;
bool equalsumpartition(int a[],int n,int sum){
    if(n==1){
        return false;
    }else if(a[n-1]>sum){
        return equalsumpartition(a,n-1,sum);
    }else{
        return equalsumpartition(a,n-1,sum) || equalsumpartition(a,n-1,sum-a[n-1]);
    }
}
int main(){
    int t,n;cin>>t;while(t--){
        cin>>n;
        int a[n],sum=0;
        for(int i=0;i<n;i++){
            cin>>a[i];
            sum+=a[i];
        }
        if(sum%2!=0){
            cout<<"NO\n";
        }else{
            if(equalsumpartition(a,n,sum/2)){
                cout<<"YES\n";
            }else{
                cout<<"NO\n";
            }
        }
    }
}