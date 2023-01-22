#include<bits/stdc++.h>
using namespace std;
using ll=long long int;
int main(){
    int t;cin>>t;while(t--){
        int n,m;cin>>n>>m;
        int a[m],cnt=0;
        map<int,int>mp;
        for(int i=0;i<m;i++){
            cin>>a[i];
            mp[a[i]]++;
            if(mp[a[i]]==1){
                if(n>0){
                    n-=1;
                    cnt++;
                }
            }else{
                if(n>)
            }
        }
    }
    
}