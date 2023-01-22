#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;cin>>t;while(t--){
        int n,k;cin>>n>>k;
        int a[n],cnt=0;
        for(int i=0;i<n;i++){
            cin>>a[i];
            if(a[i]%2==0){
                cnt++;
            }
        }
        if(k==0){
            if(n==cnt || cnt!=0){
                cout<<"NO"<<"\n";
            }else{
                cout<<"YES"<<"\n";
            }
        }else{
            if(cnt>=k){
                cout<<"YES"<<"\n";
            }else{
                cout<<"NO"<<"\n";
            }
        }
    }
    return 0;
}