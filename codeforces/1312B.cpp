#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;cin>>t;while(t--){
        int n;cin>>n;
        int a[n];
        vector<int>v;
        for(int i=0;i<n;i++){
            cin>>a[i];
            v.emplace_back(a[i]);
        }
        sort(v.rbegin(),v.rend());
        for(auto x:v){
            cout<<x<<" ";
        }
        cout<<"\n";
    }
    return 0;
}