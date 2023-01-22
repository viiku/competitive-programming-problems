#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<pair<string,int>>v;
    string ptr;
    int t;cin>>t;while(t--){
        string str;int hacks,unhack,a,b,c,d,e;
        cin>>str>>hacks>>unhack>>a>>b>>c>>d>>e;
        int p=100*hacks-50*unhack+a+b+c+d+e;
        v.emplace_back(make_pair(str,p));
    }
    int p=v[0].second;
    for(int i=0;i<v.size();i++){
        if(v[i].second>=p){
            p=v[i].second;
            ptr=v[i].first;
        }
    }
    cout<<ptr<<"\n";
    return 0;
}