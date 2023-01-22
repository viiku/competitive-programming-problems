#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<pair<int,int>>v;
    int n;cin>>n;while(n--){
        int a,b,c,d;cin>>a>>b>>c>>d;
        v.push_back(make_pair(a+b+c,d));
    }
    int p=v[0].first;
    int mn=1200;
    int r=0;
    for(int i=0;i<n;i++){
        if(v[i].first>=p){
            p=v[i].first;
            mn=min(mn,v[i].second);
            r=i;
        }
    }
    cout<<r+1<<"\n";
    return 0;
}