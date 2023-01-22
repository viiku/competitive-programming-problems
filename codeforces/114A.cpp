#include<bits/stdc++.h>
using namespace std;
using ll=long long int;
using ld=long double;
int main(){
    ll k,l;cin>>k>>l;
    ld p=(ld)log10(l)/log10(k);
    ll s=(ll)log10(l)/log10(k);
    if(s!=0){
        cout<<"YES"<<"\n"<<s<<"\n";;
    }else if(p!=0){
        cout<<"NO"<<"\n";
    }
    return 0;
}