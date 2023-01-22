#include<bits/stdc++.h>
using namespace std;
using ll=long long int;
#define ll mod=(ll)1e9+7;
int main(){
    int t;cin>>t;while(t--){
        int n,k;cin>>n>>k;
        int a[n];
        ll mul=1;
        for(int i=0;i<n;i++) cin>>a[i];
        sort(a,a+n);
        for(int i=0;i<(n-k);i++){
            mul=(mul%mod*a[i]%mod)%mod;
        }
    }
}