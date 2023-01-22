/* Date:26-03-2021 */
/* Time:16:07:58 */
#include<bits/stdc++.h>
using namespace std;
#define IOS ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);
int main(){
    IOS;
    int t,n;cin>>t;while(t--){
        cin>>n;
        int a[n];
        map<int,int>mp,mp1;
        for(int i=0;i<n;i++){
            cin>>a[i];
            mp[a[i]]++;
        }
        for(auto it:mp){
            mp1[it.second]++;
        }
        bool ok=true;
        for(auto it:mp1){
            if(it.second>1){
                ok=false;
                break;
            }
        }
        if(!ok){
            cout<<"No\n";
        }else{
            cout<<"Yes\n";
        }
    }
}