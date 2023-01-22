#include<bits/stdc++.h>
using namespace std;
using ll=long long int;
int main(){
    ll n,m,a,b;cin>>n>>m>>a>>b;
    if(n>=m){
        cout<<min((n%m)*b,(m-(n%m))*a)<<"\n";
    }else{
        cout<<min((m-n)*a,n*b)<<"\n";
    }
    return 0;
}