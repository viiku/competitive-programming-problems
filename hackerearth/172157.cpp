#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,m;cin>>n;
    int a[n];
    set<int>s;
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    cin>>m;
    int b[m];
    for(int i=0;i<m;i++){
        cin>>b[i];
        s.insert(b[i]);
    }
    vector<int>v;
    for(int i=0;i<n;i++){
        if(s.find(a[i])!=s.end()){
            continue;
        }else{
            v.emplace_back(a[i]);
        }
    }
    cout<<v.size()<<"\n";
    for(auto it:v){
        cout<<it<<" ";
    }
    return 0;
}