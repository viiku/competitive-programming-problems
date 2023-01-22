#include<bits/stdc++.h>
using  namespace std;
using ll=long long int;
int Samecordinate(int n,int a[],int s){
    int q=0;
    for(int i=0;i<n;i++){
        if(a[i]!=s){
            int p=abs(a[i]-s);
            if(p%2!=0){
                q++;
            }
        }
    }
    return q;
}
int  main(){
    int n;cin>>n;
    int a[n];
    map<int,int>mp;
    for(int i=0;i<n;i++){
        cin>>a[i];
        mp[a[i]]++;
    }
    int mx=-1,s=0;
    for(auto it=mp.begin();it!=mp.end();it++){
        if(it->second>mx){
            mx=it->second;
            s=it->first;
        }
    }
    cout<<Samecordinate(n,a,s)<<"\n";
}