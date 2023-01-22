#include<bits/stdc++.h>
using namespace std;
using ll=long long int;
int main(){
    int t,n;string str;cin>>t;while(t--){
        cin>>n>>str;
        map<char,int>mp;
        for(int i=0;i<str.size();i++){
            mp[str[i]]++;
        }
        if(n==1){
            cout<<0<<"\n";
        }else{
            ll cnt=0;
            bool ok=true;
            for(auto it:mp){
                if(it.second%2!=0 && ok){
                    ok=false;
                }else if(it.second%2!=0 && !ok){
                    cnt+=1;
                }
            }
            cout<<cnt<<"\n";
        }
    }
    return 0;
}