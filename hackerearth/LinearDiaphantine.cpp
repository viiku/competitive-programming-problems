#include<bits/stdc++.h>
#define ll long long int
using namespace std;
ll extendedGCD(ll a,ll b,ll &x,ll &y){
    if(a==0){
        x=0;
        y=1;
        return b;
    }
    ll x1,y1;
    ll ans=extendedGCD(b%a,a,x1,y1);
    x=y1-(b/a)*x1;
    y=x1;
    return ans;
}
bool findSolution(ll a,ll b,ll c,ll &x,ll &y,ll &g){
    g=extendedGCD(a,b,x,y);
    if(c%g)
        return false;
    x=x*(c/g);
    y=y*(c/g);
    if(a<0)
        x=-x;
    if(b<0)
        y=-y;
    return true;
}
int  main(){
    ll a,b,x,y,g,c;
    cin>>a>>b>>c;
    bool ans= findSolution(a,b,c,x,y,g);
    if(ans){
        cout<<"YES"<<"\n";
        if(x<0 || y<0){
            cout<<
        }
    }else{
        cout<<"NO"<<"\n";
    }
}
