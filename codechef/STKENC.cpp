
#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define IOS ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define endl "\n"
#define test ll t; cin>>t; while(t--)
#define re return 0
int main(){
    IOS;
    test{
        ll n;cin>>n;
        if(n%26==0){
            cout<<n/26<<"\n";
        }else{
            cout<<(n/26)+1<<"\n";
        }
    }
re;
}
