#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;cin>>t;while(t--){
        int n,m,k;cin>>n>>m>>k;
        int p=max(n,m)-min(n,m);
        if(k>p){
            cout<<0<<"\n";
        }else if(k<p){
            cout<<max(n,m)-(min(n,m)+k)<<"\n";   
        }else{
            cout<<0<<"\n";
        }
    }
    return 0;
}