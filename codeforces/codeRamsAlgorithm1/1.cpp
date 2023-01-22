#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;cin>>n;
    int a[n];
    map<int,int>mp;
    for(int i=0;i<n;i++){
        cin>>a[i];
        mp[a[i]]++;
    }
    int cnt=0;
    for(auto it:mp){
        if(it.second==1){
            cnt++;
        }
    }
    cout<<cnt<<"\n";
}