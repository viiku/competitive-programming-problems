#include<bits/stdc++.h>
using namespace std;
using ll=long long int;
int main(){
    int t,n,m;cin>>t;while(t--){
        cin>>n>>m;
        vector<ll>v(n+m);
        for(int i=0;i<(n+m);i++){
            cin>>v[i];
        }
        sort(v.begin(),v.end(),greater<int>());
        for(auto it:v){
            cout<<it<<" ";
        }
        cout<<endl;
    }
}