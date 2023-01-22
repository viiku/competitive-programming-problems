#include<bits/stdc++.h>
using namespace std;
using ll=long long int;
int main(){
    ll n,sum=0;cin>>n;
    for(int i=1;i<=n/2;i++){
        if(n%i==0){
            sum+=i;
        }
    }
    cout<<sum<<"\n";
    return 0;
}

