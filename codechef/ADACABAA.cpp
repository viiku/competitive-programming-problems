#include<bits/stdc++.h>
using namespace std;
using ll =long long int;
int main(){
    vector<ll>v;
    ll n,x,y,z,w,k=0;cin>>n;while(n--){
        cin>>x>>y>>z>>w;
        v.emplace_back(x+y+z+w);
    }
//    sort(v.begin(),v.end());
    for(auto it:v){
        cout<<it<<" ";
    }
    return 0;
}