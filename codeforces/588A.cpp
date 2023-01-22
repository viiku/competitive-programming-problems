#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<pair<int,int>>v;
    int n;cin>>n;
    for(int i=0;i<n;i++){
        int a,p;cin>>a>>p;
        v.emplace_back(make_pair(a,p));
    }
    int mx=v[0].second;
    int sum=0,sum1=0;
    for(int i=0;i<n;i++){
        if(v[i].second<mx){
            sum+=v[i].first;
        }else{
            sum1+=(v[i].first)*(v[i].second);
        }
    }
    cout<<sum*+sum1<<"\n";
    return 0;
}