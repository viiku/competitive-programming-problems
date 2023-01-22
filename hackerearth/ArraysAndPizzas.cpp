#include<bits/stdc++.h>
using namespace std;
using ll=long long int;
const ll mod=(ll)1e9+7;
int main(){
    int n;cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    sort(a,a+n);
    int p=0;
    ll sum=a[1];
    for(int i=0;i<n;i++){
        if(i>1){
            p++;
            if(p==4){
                sum=(sum%mod+a[i]%mod)%mod;
                p=0;
            }
        }
    }
    cout<<sum<<"\n";
    return 0;
}