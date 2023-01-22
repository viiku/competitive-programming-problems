#include<bits/stdc++.h>
using namespace std;
vector<vector<int>>v;
int main(){
    int n,m;cin>>n>>m;
    while(m--){
        int x,y;cin>>x>>y;
        v.resize(n+1);
        v[x].push_back(y);
    }
    for(int i=0;i<v.size();i++){
        for(int j=0;j<v[i].size();j++){
            cout<<v[i][j]<<" ";
        }
    }
}