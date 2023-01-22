#include<bits/stdc++.h>
using namespace std;
using ll=long long int;
int main(){
    int t,n;cin>>t;while(t--){
        cin>>n;
        int a[n];
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        ll ans=0;
        for(int i=1;i<n;i++){
            if(a[i]<a[i-1]){
                ans+=abs(a[i]-a[i-1]);
                a[i]=a[i-1];
            }
        }
        cout<<ans<<endl;
    }
}