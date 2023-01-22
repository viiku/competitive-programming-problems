#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;cin>>n;
    map<int,int>mp;
    int a[n],cnt=0,cnt1=0;
    for(int i=0;i<n;i++){
        cin>>a[i];
        mp[a[i]]++;
    }
    auto it=mp[100];
    auto it1=mp[200];
    int x=abs(mp[100]-2*mp[200]);
    if(x%2==0 && mp[100]!=0){
        cout<<"YES\n";
    }else if(x%2==0 && mp[100]==0 && mp[200]%2==0){
        cout<<"YES\n";
    }else{
        cout<<"NO\n";
    }
    return 0;
}