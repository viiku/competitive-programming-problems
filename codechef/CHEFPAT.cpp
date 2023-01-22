#include<bits/stdc++.h>
using namespace std;
using ll=long long int;
using pi=pair<int,int>;
struct compare{
    bool operator()(pair<int,int>const& a,pair<int,int>const& b){
        if(a.first==b.first){
            return (a.second<b.second);
        }
        return a.second>b.second;
    }
};

int main(){
    int t,n;cin>>t;while(t--){
        cin>>n;
        int a[n];
        priority_queue<pair<int,int>,vector<pair<int,int>>,compare>pq;
        for(int i=1;i<=n;i++){
            cin>>a[i];
            pq.push(make_pair(a[i],i));
        }
        while(!pq.empty()){
            cout<<pq.top().first<<" "<<pq.top().second<<endl;
            pq.pop();
        }
    }
}