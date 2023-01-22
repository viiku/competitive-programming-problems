#include<bits/stdc++.h>
using namespace std;
using ll=long long int;
vector<pair<int,int>>v;
int main(){
    int s,n;cin>>s>>n;while(n--){
        int x,y;cin>>x>>y;
        v.emplace_back(make_pair(x,y));
    }
    sort(v.begin(),v.end());
    int p=0;
    for(int i=0;i<v.size();i++){
        if(s>v[i].first){
            s+=v[i].second;
            p++;
        }
    }
    if(p==v.size()){
        cout<<"YES"<<"\n";
    }else{
        cout<<"NO"<<"\n";
    }
    return 0;
}