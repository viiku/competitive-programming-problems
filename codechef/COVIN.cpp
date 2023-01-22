#include<bits/stdc++.h>
using namespace std;
using ll=long long int;
int main(){
    ll fibo[91];
    fibo[1]=1,fibo[2]=2,fibo[3]=3;
    for(int i=4;i<=91;i++){
        fibo[i]=fibo[i-1]+fibo[i-2];
    }
    int t,n;cin>>t;while(t--){
        cin>>n;
        cout<<fibo[n]<<endl;
    }
}