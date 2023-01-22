#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;cin>>n;
    int a[n],cnt=0;
    map<int,int>mp;
    for(int i=0;i<n;i++){
        cin>>a[i];
        mp[a[i]]++;
    }
    for(auto it=mp.begin();it!=mp.end();it++){
        if(it->first!=it->second){
            if(it->first>it->second){
                cnt+=it->second;
            }else if(it->first<it->second){
                cnt+=it->second-it->first;
            }
        }
    }
    cout<<cnt<<"\n";
    return 0;
}