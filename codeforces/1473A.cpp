#include<bits/stdc++.h>
using namespace std;
int main(){
    int t,n,d;cin>>t;while(t--){
        cin>>n>>d;
        int a[n];
        bool ok=true;
        for(int i=0;i<n;i++){
            cin>>a[i];
            if(a[i]>d){
                ok=false;
            }
        }
        sort(a,a+n);
        if(a[0]+a[1]<=d || ok){
            cout<<"YES\n";
        }else{
            cout<<"NO\n";
        }
    }
}