#include<bits/stdc++.h>
using namespace std;
int main(){
    int t,n;cin>>t;while(t--){
        cin>>n;
        int a[n],cnt=0;
        for(int i=0;i<n;i++){
            cin>>a[i];
            if(a[i]%2!=0){
                cnt++;
            }
        }
        if(cnt==n){
            cout<<"YES\n";
        }else{
            cout<<"NO\n";
        }
    }
    return 0;
}