#include<bits/stdc++.h>
using namespace std;
int main(){
    int t,n,m,k;cin>>t;while(t--){
        cin>>n>>m>>k;
        int l[k];
        map<int,int>mp;
        for(int i=0;i<k;i++){
            cin>>l[i];
            if(i<n){
                mp[l[i]]++;
            }
        }
        for(auto it:mp){
            while(it.second>=1){
                cout<<it.first<<" ";
                it.second--;
            }
        }
        cout<<endl;
    }
}