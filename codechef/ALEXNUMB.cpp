#include<bits/stdc++.h>
using namespace std;
using ll=long long int;
ll CountPairs(ll a[],ll n){
    sort(a,a+n);
    if(a[0]==a[n-1])
        return 0;
    return ((n-1)*n)/2;
}
int main(){
    int t;
    cin>>t;
    while(t--){
        ll n;
        cin>>n;
        ll a[n];
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        if(n==1){
            cout<<0<<"\n";
        }else if(n==2){
            if(a[0]<a[1] || a[0]>a[1]){
                cout<<1<<"\n";
            }
        }else if(n>=3){
            cout<<CountPairs(a,n)<<"\n";
        }
    }
    return 0;
}