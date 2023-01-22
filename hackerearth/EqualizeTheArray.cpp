#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;cin>>n;
    int a[n],mx=0;
    vector<int>v;
    map<int,int>mp;
    for(int i=0;i<n;i++){
        cin>>a[i];
        mp[a[i]]++;
//        cout<<a[i]<<" "<<mp[a[i]]<<"\n";
        mx=max(mx,mp[a[i]]);
        v.emplace_back(mp[a[i]]);
    }
/*    cout<<mx<<"\n";
    for(auto it:v){
        cout<<it<<" ";
    }*/
    int p=v.size()-mx;
    cout<<p<<"\n";;
    return 0;
}