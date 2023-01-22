#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,m;cin>>n>>m;
    map<char,int>mp;
    char ch;
    while(n--){
        for(int i=0;i<n;i++){
            cin>>ch;
            mp[ch]++;
        }
    }
    
}