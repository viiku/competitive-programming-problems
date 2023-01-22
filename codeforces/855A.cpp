#include<bits/stdc++.h>
using namespace std;
int main(){
    map<string,int>mp;
    int n;string str;cin>>n;while(n--){
        cin>>str;
        mp[str]++;
        if(mp[str]==1){
            cout<<"NO"<<"\n";
        }else if(mp[str]>1){
            cout<<"YES"<<"\n";
        }
    }
    return 0;
}