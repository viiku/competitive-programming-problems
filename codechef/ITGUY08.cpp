#include<bits/stdc++.h>
using namespace std;
int main(){
    int t,n,m;cin>>t;while(t--){
        map<int,int>mp;
        cin>>n>>m;
        int a[n],b[m];
        for(int i=0;i<n;i++){
            cin>>a[i];
            mp[a[i]]++;
        }
        for(int i=0;i<m;i++){
            cin>>b[i];
            mp[b[i]]++;
        }
        for(auto it:mp){
            if(it.second==1){
                cout<<it.first<<" ";
            }
        }
    }
    return 0;
}