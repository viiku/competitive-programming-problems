#include<bits/stdc++.h>
using namespace std;
using ll=long long int;
int main(){
    ll t;
    cin>>t;
    while(t--){
        ll n,k,sum=0;
        cin>>n>>k;
        ll a[n];
        for(int i=0;i<n;i++){
            cin>>a[i];
            sum+=a[i];
        }
        ll count=0;
        for(int i=0;i<n;i++){
            if(a[i]+k>(sum-a[i])){
                count++;
            }
        }
        cout<<count<<"\n";
    }
    return 0;
}