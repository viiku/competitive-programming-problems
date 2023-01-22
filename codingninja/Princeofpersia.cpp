#include<bits/stdc++.h>
using namespace std;
using ll=long long int;
int main(){
    int t,n,m;cin>>t;while(t--){
        cin>>n>>m;
        int a[n];
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        int ans=-1;
        for(int i=0;i<n;i++){
            if(a[i]>m){
                ans+=abs(a[i]-m);
            }
        }
    }
}