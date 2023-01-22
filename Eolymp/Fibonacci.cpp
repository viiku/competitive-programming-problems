#include<bits/stdc++.h>
using namespace std;
using ll=long long int;
void fibonacci(ll n){
    int f[n];
    f[0]=1;f[1]=1;
    for(int i=2;i<=n;i++){
        f[i]=f[i-1]+f[i-2];
    }
    cout<<f[n]<<endl;
}
int main(){
    ll n;cin>>n;
    fibonacci(n);
}