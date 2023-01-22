#include<bits/stdc++.h>
using namespace std;
int main(){
    int t,n;cin>>t;while(t--){
        cin>>n;
        int k,cnt=0,cnt1=0;
        for(int i=1;i<=n;i++){
            cin>>k;
            if(k==1){
                cnt1++;
            }else if(k==-1){
                cnt++;
            }
        }
        if(cnt1>=cnt)
            cout<<"YES\n";
        else
            cout<<"NO\n";
    }
    return 0;
}