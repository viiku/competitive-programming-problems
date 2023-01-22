#include<bits/stdc++.h>
using namespace std;
using ll=long long int;
ll binary(ll n){
    ll l=1,r=(n+1)/2,mid=0,ans=0;
    while(l<=r){
        mid=l+(r-l)/2;
        if(mid*mid<=n){
            ans=mid;
            r=mid-1;
        }else if(mid*mid>n){
            l=mid+1;
        }
    }
    return ans;
}
int main(){
    ll n;cin>>n;
    cout<<binary(n)<<endl;
}