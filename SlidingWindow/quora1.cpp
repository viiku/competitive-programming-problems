#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;cin>>n;
    int a[n];
    map<int,vector<int>>mp;
    for(int i=0;i<n;i++){
        cin>>a[i];
        mp[a[i]].push_back(i);
    }
    int mx=0;
    for(auto it:mp){
        mx=max(mx,it.second[it.second.size()-1]-it.second[0]);
    }
    cout<<mx;
}