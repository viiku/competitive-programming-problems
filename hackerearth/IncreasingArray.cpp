#include<bits/stdc++.h>
using namespace std;
using ll=long long int;
int main(){
    ll n;
    cin>>n;
    ll a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    ll sum=0;
    for(int i=0;i<n-1;i++){
        if(a[i]>a[i+1]){
            sum+=abs(a[i]-a[i+1]);
            a[i]=a[i+1];
        }
    }
    cout<<sum<<"\n";
    return 0;
}