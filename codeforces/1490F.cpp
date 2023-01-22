#include<bits/stdc++.h>
using namespace std;
int main(){
    int t,n;cin>>t;while(t--){
        cin>>n;
        map<int,int>mp,mp1;
        int a[n];
        for(int i=0;i<n;i++){
            cin>>a[i];
            mp[a[i]]++;
        }
        for(auto it:mp){
            mp1[it.second]++;
        }
        int mx=0,p=0,cnt=0;
        for(auto it:mp1){
            if(it.second>=mx){
                mx=it.second;
                p=it.first;
            }
        }
        for(auto it:mp){
            if(it.second!=p){
                if(it.second>=p){
                    cnt+=(it.second-p);
                }else{
                    cnt+=it.second;
                }
            }
        }
        cout<<cnt<<endl;
    }
}