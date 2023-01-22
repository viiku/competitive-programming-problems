#include<bits/stdc++.h>
using namespace std;
using ll=long long int;
const ll maxi=(ll) 1e9+7;
int main(){
    ll n,q=0,sum=0,sum1=0;
    cin>>n;
    ll a[n],cnt=0,mn=maxi;
    for(int i=0;i<n;i++){
        cin>>a[i];
        if(a[i]%2==0){
            sum+=a[i];
        }else{
            cnt++;
            q=min(mn,a[i]);
            sum1+=a[i];
        }
    }
    if(cnt%2==0){
        cout<<sum+sum1<<"\n";
    }else{
        cout<<sum+sum1-q<<"\n";
    }
/*    ll p=sum+sum1;
    if(p%2==0){
        cout<<p<<"\n";
    }else{
        cout<<p-q<<"\n";
    }*/
}