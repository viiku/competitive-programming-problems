#include<bits/stdc++.h>
using namespace std;
using ll=long long int;
ll sieve_size=1e6+1;
vector<bool>bs(sieve_size,true);
vector<int>primes;
void sieve(){
    bs[0]=bs[1]=false;
    for(int i=2;i<=n;i+=2){
        if(i%2==0){
            bs[i]=false;
        }
    }
    primes.push_back(2);
    for(int i=2;i*i<=sieve_size;i++){
        if(bs[i]){
            for(int j=i*i;j<=n;j+=i){
                bs[j]=false;
            }
        }
    }
    for(int i=3;i<=sieve_size;i++){
        if(bs[i]){
            primes.push_back(i);
        }
    }
}
ll numDivi(ll k){
    ll i=0,count=1; //since 1 is also a divior so we're strating from 1
    while(i*i<=k){
        ll power=0;
        while(k%primes[i]==0){
            k/=primes[i];
            power++;
        }
        count*=(power+1);
        i++;
    }
    if(k!=1) count*=2; //Last factor has power 1,we add 1 to it
    return count;
}

int main(){
    int q,l,r;cin>>q;while(q--){
        cin>>l>>r;
        for(int i=l;i<=r;i++){
            
        }
    }
}