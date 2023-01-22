#include<bits/stdc++.h>
using namespace std;
using ll=long long int;
using ld=long double;
ll BinaryExpo(ll a,ll b) { ll result=1; while(b>0){ if(b%2==1){ result *=a; } a*=a;b/=2; } return result; }
int main(){
    int t,c;cin>>t;while(t--){
        cin>>c;
        int d=(log10(c)/log10(2))+1;
        map<int,int>mp;
        ll mx=INT_MIN;
        ll d1=BinaryExpo(2,d);
        for(int i=0;i<d1;i++){
            int s=i^c;
            if(mp.find(s)!=mp.end()){
                ll k=i*s;
                mx=max(mx,k);
            }
            mp.insert(make_pair(i,mp[i]));
        }
        cout<<mx<<endl;
    }
}