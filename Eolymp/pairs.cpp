/*17-03-2021*/
#include<bits/stdc++.h>
using namespace std;
using ll=long long int;
#define IOS ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);
int main(){
    IOS;
    ll n,k;cin>>n>>k;
    ll a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int cnt=0;
    multiset<ll>s;
    for(int i=0;i<n;i++){
        if(s.count(k-a[i])){
            cnt++;
        }else{
            s.insert(a[i]);
        }
    }
    cout<<cnt<<endl;
}