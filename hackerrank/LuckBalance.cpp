#include<bits/stdc++.h>
using namespace std;
using ll=long long int;
int main(){
    int n,k,x,y;cin>>n>>k;
    vector<pair<int,int>>v(n);
    for(int i=0;i<n;i++){
        cin>>v[i].first>>v[i].second;
    }
    sort(v.rbegin(),v.rend());
    ll sum=0;
    for(int i=0;i<(int)n;i++){
        if(v[i].second==0){
            sum+=v[i].first;
        }else{
            if(k>0){
                sum+=v[i].first;
                k--;
            }else{
                sum-=v[i].first;
            }
        }
    }
    cout<<sum<<endl;
}