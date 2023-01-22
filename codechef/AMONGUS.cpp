#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;cin>>n;
    map<int,int>mp;
    int a[2*n+1];
    for(int i=0;i<(2*n);i++){
        cin>>a[i];
        mp[a[i]]++;
    }
    for(auto it:mp){
        if(it.second%2!=0){
            cout<<it.first<<"\n";
            break;
        }
    }
    return 0;
}