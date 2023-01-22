#include<bits/stdc++.h>
using namespace std;
using ll=long long int;
int banknotes(int A,int B,int S,int N){
    ll p=0;
    if(S%__gcd(A,B)==0){
        // if(A>B){
            ll K=N*B;
            if((S-K)%(A-B)==0){
                p=abs(S-K)/abs(A-B);
            }else{
                p=-1;
            }
        // }
    }else{
        p=-1;
    }
    return p;
}
int main(){
    int A,B,S,N;cin>>A>>B>>S>>N;
}