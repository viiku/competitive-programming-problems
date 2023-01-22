// Date:11-04-2021
// Time:01:20:39
#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define testcases ll t; cin>>t; while(t--);
#define IOS ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);
int main(){
    IOS;
    // testcases{
        int n;string str,ptr="";cin>>n>>str;
        int i=0,j=0;
        unordered_map<string,int>mp;
        while(j<n){
            if((j-i+1)<2){
                j++;
            }else if((j-i+1)==2){
                mp[ptr]++;

            }
        }
    // }
}