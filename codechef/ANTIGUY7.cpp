#include<bits/stdc++.h>
using namespace std;
using ll=long long int;
int main(){
    ll t,n;cin>>t;while(t--){
        cin>>n;
        ll a[n];
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        sort(a,a+n);
        ll k=a[n-1]*a[n-2],p=a[0]*a[1];
        cout<<k<<" "<<p<<"\n";
    }
    return 0;
}