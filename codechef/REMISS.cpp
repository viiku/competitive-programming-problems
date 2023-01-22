#include<bits/stdc++.h>
using namespace std;
using ll=long long int;
int main(){
    int t;
    cin>>t;
    while(t--){
        ll a,b;
        cin>>a>>b;
        cout<<max(a,b)<<" "<<a+b<<"\n";
    }
    return 0;
}