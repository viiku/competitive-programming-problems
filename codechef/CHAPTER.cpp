#include<bits/stdc++.h>
using namespace std;
using ll=long long int;
int main(){
    int t,x,m,k;cin>>t;while(t--){
        cin>>x>>m>>k;
        int a[x];
        ll sum=0,p=0;
        for(int i=0;i<x;i++){
            cin>>a[i];
            sum+=a[i]%m;
            p+=a[i]/m;
        }
        // cout<<p+(sum/m)<<endl;
        if(p+(sum/m)>=k){
            cout<<k<<endl;
        }else{
            cout<<p+(sum/m)<<endl;
        }
    }
}