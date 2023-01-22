// Date:07-04-2021
// Time:10:52:48
#include<bits/stdc++.h>
using namespace std;
#define long long int=ll;
#define testcases ll t; cin>>t; while(t--);
#define IOS ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);
int main(){
    IOS;
    int r,o,c;cin>>r>>o>>c;
    if(c+(20-o)*36>r){
        cout<<"YES\n";
    }else{
        cout<<"NO\n";
    }
}