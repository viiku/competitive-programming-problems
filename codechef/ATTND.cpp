#include<bits/stdc++.h>
using namespace std;
using ll=long long int;
void Solve_test(ll a[],ll n,ll k){
    ll gcd=a[0];
    ll sum=0,sum1=0;
    for(int i=0;i<n;i++){
        gcd=__gcd(gcd,a[i]);
    }
    if(gcd%k==0){
        cout<<0<<"\n";
    }else{
        ll mn=0;
        for(int i=0;i<n;i++){
            if(a[i]>=k){
                mn+=min(a[i]%k,k-(a[i]%k));
            }else{
                mn+=k-(a[i]%k);
            }
        }
        cout<<mn<<"\n";
    }
}
int main(){
    int t;cin>>t;while(t--){
        ll n,k;cin>>n>>k;
        ll a[n],p=0;
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        Solve_test(a,n,k);
    }
    return 0;
}