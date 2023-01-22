#include<bits/stdc++.h>
using namespace std;
using ld=float;
int main(){
    int m1,m2,m3,m4,m5;cin>>m1>>m2>>m3>>m4>>m5;
    int w1,w2,w3,w4,w5;cin>>w1>>w2>>w3>>w4>>w5;
    vector<pair<int,int>>v;
    vector<int>v1={500,1000,1500,2000,2500};
    v.emplace_back(make_pair(m1,w1));
    v.emplace_back(make_pair(m2,w2));
    v.emplace_back(make_pair(m3,w3));
    v.emplace_back(make_pair(m4,w4));
    v.emplace_back(make_pair(m5,w5));
    int hs,hu,sum=0;cin>>hs>>hu;
    for(int i=0;i<v.size();i++){
        sum+=max((ld)(0.3)*v1[i],v1[i]*(ld)(250-v[i].first)/250-50*v[i].second);
    }
    cout<<sum+100*hs-50*hu<<"\n";
    return 0;
}