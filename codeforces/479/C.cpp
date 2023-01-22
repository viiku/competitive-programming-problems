// Date:11-04-2021
// Time:01:34:12
#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define testcases ll t; cin>>t; while(t--);
#define IOS ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);
int main(){
    IOS;
    // testcases{
        int n,k;cin>>n>>k;
        int a[n];
        map<int,int>mp;
        for(int i=0;i<n;i++){
            cin>>a[i];
            mp[a[i]]++;
        }
        if(k==0){
            cout<<a[0]<<endl;
        }else{
            int ans=-1;
            for(auto it:mp){
                if(k>0){
                    k-=it.second;
                    if(k==0){
                        ans=it.first+1;
                        break;
                    }else if(k<0){
                        break;
                    }
                }
            }
            if(ans!=-1){
                if(ans>=1 && ans<=1e9){
                    cout<<ans<<endl;
                }else{
                    cout<<-1<<endl;
                }
            }else{
                cout<<-1<<endl;
            }
        }
    // }
}