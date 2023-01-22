/*27-02-2021*/
#include<bits/stdc++.h>
using namespace std;
#define IOS ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);
int main(){
    IOS;
    int n,x;cin>>n>>x;
    int a[n];
    unordered_map<int,int>mp;
    for(int i=1;i<=n;i++){
        cin>>a[i];
    }
    for(int i=1;i<n;i++){
        int k=x-a[i];
        for(int j=i+1;j<=n;j++){
            if(mp.find(k-a[j])!=mp.end() && i!=j){
                cout<<i<<" "<<j<<" "<<mp[k-a[j]]<<endl;
                return 0;
            }
        }
        mp.insert(make_pair(a[i],i));
    }
    cout<<"IMPOSSIBLE\n";
}
