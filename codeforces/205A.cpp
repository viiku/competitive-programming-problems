#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;cin>>n;
    int a[n];
    vector<pair<int,int>>v;
    for(int i=0;i<n;i++){
        cin>>a[i];
        v.push_back(make_pair(a[i],i+1));
    }
    sort(v.begin(),v.end());
    if(v[0].first==v[1].first){
        cout<<"Still Rozdil\n";
    }else{
        cout<<v[0].second<<endl;
    }
}