#include<bits/stdc++.h>
using namespace std;
using ll=long long int;
vector<pair<int,int>>v;
int main(){
    int n;cin>>n;while(n--){
        int id,m;cin>>id>>m;
        v.emplace_back(make_pair(m,id));
    }
    sort(v.rbegin(),v.rend());
    for(int i=0;i<v.size();i++){
        cout<<v[i].second<<" "<<v[i].first<<"\n";
    }
    while(v[i].second<v[i+1].second){
        swap(v[i].second,v[i+1].second);
    }
    return 0;
}