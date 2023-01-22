#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;cin>>n;
    vector<int>v(n);
    unordered_map<int,int>mp;
    for(int i=0;i<n;i++){
        cin>>v[i];
        mp[v[i]]=i;
    }
    int mn=INT_MAX;
    for(int i=0;i<n;i++){
        if(mp.find(v[i])!=mp.end() && mp[v[i]]!=i){
            mn=min(mn,abs(i-mp[v[i]]));
        }
    }
    cout<<mn<<endl;
}