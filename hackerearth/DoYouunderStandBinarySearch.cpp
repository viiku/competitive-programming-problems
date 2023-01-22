/*20-03-2021*/
#include<bits/stdc++.h>
using namespace std;
#define IOS ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);
int main(){
    IOS;
    string s;cin>>s;
    map<int,int>mp;
    for(int i=0;i<(int)s.size();i++){
        if((int)s[i]>=48 && (int)s[i]<=57){
            int k=s[i]-'0';
            mp[k]++;
        }
    }
    if(mp.size()<2){
        cout<<-1<<endl;
    }else{
        auto it=mp.rbegin();
        it++;
        int p=it->first;
        cout<<p;
        // for(auto it:mp){
        //     cout<<it.first<<" "<<it.second<<endl;
        // }
    }
}