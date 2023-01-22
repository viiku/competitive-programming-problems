#include<bits/stdc++.h>
using namespace std;
using ll=long long int;
int main(){
    int t;cin>>t;while(t--){
        ll n;cin>>n;
        ll k=(ll)log2(n)+1-__builtin_popcountll(n);
        cout<<k<<"\n";
    }
}