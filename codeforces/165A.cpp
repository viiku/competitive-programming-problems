#include<bits/stdc++.h>
using namespace std;
vector<pair<int,int>>v;
int main(){
    int t;cin>>t;while(t--){
        int x,y;cin>>x>>y;
        v.emplace_back(make_pair(x,y));
    }
    int cnt=0,p=0,q=0,r=0,s=0;
    for(int i=0;i<v.size();i++){
        for(int j=0;j<v.size();j++){
            if(i!=j){
                if(v[j].first>v[i].first && v[j].second==v[i].second){
                    p++;
                }else if(v[j].first<v[i].first && v[j].second==v[i].second){
                    q++;
                }else if(v[j].first==v[i].first && v[j].second<v[i].second){
                    r++;
                }else if(v[j].first==v[i].first && v[j].second>v[i].second){
                    s++;
                }
            }
        }
        if(p==0 || q==0 || r==0 || s==0){
            p=0;q=0;r=0;s=0;
        }else{
            cnt++;
            p=0;q=0;r=0;s=0;
        }
    }
    cout<<cnt++;
    return 0;
}