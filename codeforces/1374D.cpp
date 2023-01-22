#include<bits/stdc++.h>
using namespace std;
using ll=long long int;
int n,k;

int gcd1(){
    cin>>n>>k;
    int a[n]
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int gcd=a[0];
    for(int i=0;i<n;i++){
        gcd=__gcd(gcd,a[i]);
    }
    return gcd;
}
int main(){
    int t;cin>>t;while(t--){
        int p=gcd1();
        if(p==k){
            cout<<p<<"\n";
        }else{

        }
    }
}