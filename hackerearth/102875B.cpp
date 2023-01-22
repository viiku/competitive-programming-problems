#include<bits/stdc++.h>
using namespace std;
using ll=long long int;
int main(){
    int t;cin>>t;while(t--){
        int n;cin>>n;
        int h[n],a[n],d[n];
        for(int i=0;i<n;i++) cin>>h[i];
        for(int i=0;i<n;i++) cin>>a[i];
        for(int i=0;i<n;i++) cin>>d[i];
        ll p=0,q=0,sum=0;
        for(int i=0;i<n-1;i++){
            if(h[i]>h[i+1]){
                p=abs(h[i]-h[i+1]);
                q=min(a[i]*p,d[i]*p);
                sum+=q;
                cout<<sum<<" ";
            }else{
                continue;
            }
        }
//        cout<<sum<<"\n";
    }
    return 0;
}