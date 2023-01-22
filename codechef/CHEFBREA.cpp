#include<bits/stdc++.h>
using namespace std;
int main(){
    int t,l,b;cin>>t;while(t--){
        cin>>l>>b;
        int k=__gcd(l,b);
        cout<<(l*b)/(k*k)<<endl;
    }
}