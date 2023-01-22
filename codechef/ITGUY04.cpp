#include<bits/stdc++.h>
using namespace std;
using ll=long long int;
int main(){
    vector<ll>v;
    ll sum=0,k=0,t,n;
    for(int i=0;i<10001;i++){
        k=i*i;
        sum+=k;
        v.emplace_back(sum);
    }
    cin>>t;while(t--){
        cin>>n;
        cout<<v[n-1]<<"\n";
    }
    return 0;
}