#include<bits/stdc++.h>
using namespace std;
int main(){
    int t,n,k,ti,di;cin>>t;while(t--){
        vector<pair<int,int>>v;
        cin>>n>>k;while(n--){
            cin>>ti>>di;
            v.emplace_back(make_pair(ti,di));
        }
        int sum=0;
        for(int i=0;i<v.size();i++){
            if(sum<=k){
                sum+=v[i].first;
                k
            }else{

            }
        }
    }
}