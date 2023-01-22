#include<bits/stdc++.h>
using namespace std;
using ll=long long int;
int main(){
    int t;
    cin>>t;
    while(t--){
        ll n,m,c,cnt=0,cnt1=0;
        cin>>n>>m>>c;
        while(n--){
            ll x,y;
            cin>>x>>y;
            ll z=0;
            z=y-(m*x+c);
            if(z>0){
                cnt++;
            }else if(z<0){
                cnt1++;
            }
        }
        cout<<cnt*cnt1<<"\n";  
    }
    return 0;
}