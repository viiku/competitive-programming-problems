/*17-03-2021*/
#include<bits/stdc++.h>
using namespace std;
#define IOS ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);
int main(){
    IOS;
    int n;cin>>n;
    int a[n],cnt=-1;
    map<int,int>mp;
    for(int i=0;i<n;i++){
        cin>>a[i];
        mp[a[i]]++;
        if(mp[a[i]]>(n/2)){
            cnt++;
        }
    }
    for(auto it:mp){
        if(it.second>(n/2)){
            cnt=it.first;
        }
    }
    cout<<cnt<<endl;
}