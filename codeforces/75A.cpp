#include<bits/stdc++.h>
using namespace std;
using ll=long long int;
int main(){
    int a,b,cnt=0;cin>>a>>b;
    vector<int>v,v1,v2;
    ll sum=a+b;
    while(a!=0 && b!=0){
        if(a%10!=0 && b%10!=0){
            v.emplace_back(a%10);
            v1.emplace_back(b%10);
        }else if(a%10==0 || b%10==0){
            cnt++;
        }
        a/=10;
        b/=10;
    }
    while(sum!=0){
        if(sum%10!=0){
            v2.emplace_back(sum%10);
        }
        sum/=10;
    }
    bool ok=true;
    for(int i=0;i<v.size();i++){
        if(v[i]+v1[i]!=v2[i]){
            ok=false;
        }
    } 
    if(cnt==0 || ok){
        cout<<"YES\n";
    }else{
        cout<<"NO\n";
    }
}