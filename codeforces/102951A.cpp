#include<bits/stdc++.h>
using namespace std;
using ll=long long int;
int main(){
    int n;cin>>n;
    int x[n],y[n];
    for(int i=0;i<n;i++){
        cin>>x[i];
    }
    for(int i=0;i<n;i++){
        cin>>y[i];
    }
    ll mx=INT_MIN;
    for(int i=0;i<n-1;i++){
        for(int j=0;j<n;j++){
            ll kx=x[i]-x[j];
            ll ky=y[i]-y[j];
            mx=max(mx,kx*kx+ky*ky);
        }
    }
    cout<<mx<<endl;
}