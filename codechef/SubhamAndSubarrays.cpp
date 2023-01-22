#include<bits/stdc++.h>
using namespace std;
map<int,int>mp;
set<int>s;
int main(){
    int n;cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
        s.insert(a[i]);
        mp[a[i]]++;
    }
    for(auto it:mp){
        cout<<it.first<<" "<<it.second<<"\n";
    }
}