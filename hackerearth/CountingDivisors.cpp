#include<bits/stdc++.h>
using namespace std;
using ll=long long int;
ll CountDivisors(ll x){
    ll count=0;
    if(x%2!=0)
        for(int i=3;i*i<=x;i+2){
            if(x%i==0){
                if(x/i!=i){
                    count+=2;
                }else{
                    count++;
                }
            }
        }
        return count+2;
    return count+3;
}
int main(){
    ll n;
    cin>>n;
    while(n--){
        ll x;
        cin>>x;
        cout<<CountDivisors(x)<<"\n";
    }
    return 0;
}
    