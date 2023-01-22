#include<bits/stdc++.h>
using namespace std;
using ll=long long int;
int main(){
    ll t,n;cin>>t;while(t--){
        cin>>n;
        int a[n];
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        sort(a,a+n);
        int mn=1e7+1;
        int p=0,q=0;
        for(int i=0;i<n-1;i++){
            if(abs(a[i]-a[i+1])<mn){
                mn=abs(a[i]-a[i+1]);
                p=a[i];
                q=a[i+1];
            }
        }
        cout<<p<<" "<<q<<endl;
    }
}