#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;cin>>n;
    int a[n];
    unordered_map<int,int>mp;
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int ans=0;
    for(int i=0;i<n;i++){
        int x=0^a[i];
        if(mp.find(x)!=mp.end()){
            ans+=mp[a[i]];
        }
        mp[a[i]]++;
    }
    cout<<ans<<endl;
}