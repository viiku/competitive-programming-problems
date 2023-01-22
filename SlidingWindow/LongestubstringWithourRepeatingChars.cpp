#include<bits/stdc++.h>
using namespace std;
int main(){
    string str;cin>>str;
    int i=0,j=0,mx=0;
    int n=(int)str.size();
    unordered_map<char,int>mp;
    while(j<n){
        mp[str[j]]++;
        if(mp[str[j]]==1){
            mx=max(mx,j-i+1);
            j++;
        }else if(mp[str[j]]>1){
            while(mp[str[j]]>1){
                mp[str[i]]--;
                if(mp[str[i]]==0){
                    mp.erase(mp[str[i]]);
                }
                i++;
            }
            mx=max(mx,j-i+1);
            j++;
        }
    }
    cout<<mx<<endl;
}