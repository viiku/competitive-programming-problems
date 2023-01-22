#include<bits/stdc++.h>
using namespace std;
using ll=long long int;
int main(){
    int n;cin>>n;
    int a[n];
    map<int,int>mp;
    for(int i=0;i<n;i++){
        cin>>a[i];
        mp[a[i]]++;
    }
    int mx=0,p=0;
    for(auto it:mp){
        if(it.second>mx){
            mx=max(mx,it.second);
            p=it.first;
        }
    }
    cout<<p<<endl;
}