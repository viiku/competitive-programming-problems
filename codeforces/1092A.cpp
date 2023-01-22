#include<bits/stdc++.h>
using namespace std;
int main(){
    map<char,int>mp;
    for(int i=1;i<=26;i++){
        mp['a'+i]++;
    }
    for(auto it:mp){
        cout<<it.first<<it.second<<endl;
    }
    // int t;cin>>t;while(t--){
    //     int n,k;cin>>n>>k;

    // }
}