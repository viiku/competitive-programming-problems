#include<bits/stdc++.h>
using namespace std;
vector<pair<int,int>>v;
int main(){
    int n,k;cin>>n>>k;
    int a[n];
    map<int,int>mp;
    for(int i=0;i<n;i++){
        cin>>a[i];
        mp.insert(make_pair(a[i],i+1));
//        v.emplace_back(make_pair(a[i],i+1));
    }
    int sum=0;
    for(auto it=mp.end();it!=mp.begin();it--){
//        cout<<it->first<<" "<<it->second<<"\n";
        if(i<=k){
            sum+=it->first;
        }
        sum+=
    }
}