#include"bits/stdc++.h"
using namespace std;
int main(){
    int n,m;cin>>n>>m;
    vector<pair<int,int>>v;
    for(int i=1;i<=max(n,m);i++){
        for(int j=1;j<=min(n,m);j++){
            v.emplace_back(make_pair(j,i));
        }
    }
    
}