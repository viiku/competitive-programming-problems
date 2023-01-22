#include<bits/stdc++.h>
using namespace std;
using ll=long long int;
int main(){
    int t;cin>>t;while(t--){
        int n;cin>>n;
        int a[n],mx=0,mx1=0,p=0;
        map<int,int>mp;
        vector<int>v;
        for(int i=0;i<n;i++){
            cin>>a[i];
            mp[a[i]]++;
            if(mp[a[i]]==2){
                v.emplace_back(a[i]);
            }else if(mp[a[i]]==4){
                mx=max(a[i]*a[i],mx);
            }
        }
        sort(v.begin(),v.end(),greater<int>());
        if(v.size()>=2){
            cout<<max(v[0]*v[1],mx)<<"\n";
        }else if(v.size()<=1 && mx!=0){
            cout<<mx<<"\n";
        }else{
            cout<<-1<<"\n";
        }
    }
    return 0;
}