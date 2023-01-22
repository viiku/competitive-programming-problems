#include<bits/stdc++.h>
using namespace std;
using ll=long long int;
int main(){
    int t;cin>>t;while(t--){
        ll n1,n2,m;cin>>n1>>n2>>m;
        cout<<max({n1+n2-m*(m+1),n1-n2,n2-n1})<<"\n";
    }
    return 0;
}