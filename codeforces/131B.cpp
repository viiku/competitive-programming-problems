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
    int cnt=mp[0]*(mp[0]-1)/2;
    for(int i=1;i<=9;i++){
        cnt+=(mp[a[i]]*mp[-a[i]]);
        cout<<cnt<<" ";
    }
    cout<<cnt<<endl;
}