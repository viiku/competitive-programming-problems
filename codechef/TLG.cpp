#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<pair<int,int>>v;
    int n,si,ti,mx=0,q=0;cin>>n;while(n--){
        cin>>si>>ti;
        mx=max(abs(si-ti),mx);
        if(si>ti){
            v.emplace_back(make_pair((si-ti),1));
        }else if(si<ti){
            v.emplace_back(make_pair((ti-si),2));
        }
        for(int i=0;i<v.size();i++){
            if(v[i].first==mx){
                mx=v[i].first;
                q=v[i].second;
//                break;
            }
        }
        cout<<q<<" "<<mx<<"\n"; 
    }
    return 0;
}