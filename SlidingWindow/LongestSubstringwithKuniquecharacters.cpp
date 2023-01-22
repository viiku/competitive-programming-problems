#include<bits/stdc++.h>
using namespace std;
int main(){
    string str;int k;cin>>str>>k;
    int n=(int)str.size(),mx=0;
    map<char,int>mp;
    int i=0,j=0;
    while(j<n){
        mp[str[j]]++;
        if(mp.size()<k){
            j++;
        }else if(mp.size()==k){
            mx=max(mx,j-i+1);
            j++;
        }else if(mp.size()>k){
            while(mp.size()>k){
                mp[str[i]]--;
                if(mp[str[i]]==0){
                    mp.erase(str[i]);
                }
                i++;
            }
            if(mp.size()==k){
                mx=max(mx,j-i+1);
            }
            j++;
        }
    }
    cout<<mx;
}