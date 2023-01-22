#include<bits/stdc++.h>
using namespace std;
using ll=long long int;
int main(){
    ll n,m,k,p;cin>>n;
    set<ll>s;
    for(int i=1;i<=n;i++){
        cin>>k;
        s.insert(k);
    }
    cin>>m;
    for(int i=1;i<=m;i++){
        cin>>p;
        if(s.find(p)!=s.end()){
            cout<<"YES\n";
        }else{
            cout<<"NO\n";
        }
    }
    return 0;
}