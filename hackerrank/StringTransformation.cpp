// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     int n;cin>>n;
//     int a[n];
//     set<int>s;
//     for(int i=0;i<n;i++){
//         cin>>a[i];
//         s.insert(a[i]);
//     }
//     int p=3,q=0;
//     for(auto it=s.rbegin();it!=s.rend();it++){
//         if(p==1){
//             q=*it;
//         }
//         p--;
//     }
//     cout<<q;
// }
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,k;cin>>n>>k;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
        priority_queue<pair<int,int>>pq;
        map<int,int>mp;
        for(int i=0;i<n;i++){
            mp[a[i]]++;
        }
        for(auto it:mp){
            pq.push({(-1)*it.second,it.first});
            while(pq.size()>k){
                pq.pop();
            }
        }
        vector<int>v;
        while(!pq.empty()){
            // cout<<pq.top().first<<" "<<pq.top().second<<"\n";
            v.emplace_back(pq.top().second);
            pq.pop();
        }
}