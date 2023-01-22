#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,k;cin>>n>>k;
    int a[n];
    for(int i=0;i<n;i++) cin>>a[i];
    sort(a,a+n);
/*    vector<pair<int,int>>v;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            v.emplace_back(make_pair(a[i],a[j]));
        }
    }
    cout<<v[k-1].first<<" "<<v[k-1].second<<"\n";*/
    //TODO
    int p=0;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            p++;
            if(p==k){
                cout<<a[i]<<" "<<a[j]<<"\n";
            }
        }
    }
    return 0;
}