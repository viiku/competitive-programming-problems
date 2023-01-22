// Date:25-04-2021
// Time:08:07:40
#include<bits/stdc++.h>
using namespace std;
using ll=long long int;
#define testcases ll t; cin>>t; while(t--);
#define IOS ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);
int main(){
    IOS;
    int n,k;cin>>n>>k;
    vector<int>v,v1;
    int p=0;
    while(n>0){
        p=n%k;
        v.push_back(p);
        n/=k;
    }
    
}