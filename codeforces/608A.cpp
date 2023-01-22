#include<bits/stdc++.h>
using namespace std;
vector<pair<int,int>>v;
int main(){
    int n,s;cin>>n>s;while(n--){
        int fi,ti;cin>>fi>>ti;
        v.emplace_back(make_pair(fi,ti));
    }
    sort(v.begin(),v.end(),greater<int>());
    int cnt=0;
    for(int i=0;i<v.size();i++){
        cnt=m-v[i].first;
        m=v[i].first;
        if(v[i].second>cnt){
            cnt+=v[i].second;
        }else{
            continue;
        }
    }
}