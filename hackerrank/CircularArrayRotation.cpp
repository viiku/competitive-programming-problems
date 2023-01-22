#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,k,q,x;cin>>n>>k>>q;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int p=k%n;
    vector<int>v;
    for(int i=n-p;i<n;i++){
        v.push_back(a[i]);
    }
    for(int i=0;i<(n-p);i++){
        v.push_back(a[i]);
    }
    v.resize(n);
    while(q--){
        cin>>x;
        cout<<v[x]<<endl;
    }
}