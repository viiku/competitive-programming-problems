#include<bits/stdc++.h>
using namespace std;
using ll=long long int;
int main(){
    int t,n;cin>>t;while(t--){
        cin>>n;
        int a[n];
        for(int i=0;i<n;i++) cin>>a[i];
        sort(a,a+n);
        ll k=abs(a[0]-a[1])+abs(a[1]-a[n-1])+abs(a[n-1]-a[0]);
        ll p=abs(a[0]-a[n-2])+abs(a[n-2]-a[n-1])+abs(a[n-1]-a[0]);
        cout<<max(k,p)<<endl;
    }
}