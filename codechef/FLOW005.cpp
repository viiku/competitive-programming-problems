#include<bits/stdc++.h>
using namespace std;
using ll=long long int;
int main(){
    int t;cin>>t;while(t--){
        ll n;
        cin>>n;
        cout<<n/100+(n=n%100)/50+(n=n%50)/10+(n=n%10)/5+(n=n%5)/2+(n=n%2)/1<<"\n";
    }
    return 0;
}