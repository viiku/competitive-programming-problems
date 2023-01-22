#include<bits/stdc++.h>
using namespace std;
int main(){
    map<int,int>mp;
    int n,x,id;cin>>n;
    x=n*5;
    int a[x];
    for(int i=0;i<x;i++){
        cin>>a[i];
        mp[a[i]]++;
    }
    for(auto it:mp){
        cout<<it.first<<"\n";
    }
    return 0;
}