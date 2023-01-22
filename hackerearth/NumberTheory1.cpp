#include<bits/stdc++.h>
using namespace std;
using ll=long long int;
// Creating sieve of length up to 99999999(<10^8)
ll sieve_size=99999999;
//creating a  bool array of this size;
bool bs[99999999]={false};
vector<int>primes;
void sieve(){ //create list of primes in [0 to n]
    bs[0]=bs[1]=true; //Except index 0 and 1
    primes.push_back(2);
    for(int i=2;i<=sieve_size;i+=2){
        bs[i]=true;
    }
    for(ll i=3;i*i<=sieve_size;i+=2)if(!bs[i]) {
        for(ll j=i*i;j<=sieve_size;j+=i){
            bs[j]=true;
        }
    }
    for(int i=3;i<=sieve_size;i++){
        if(!bs[i]){
            primes.push_back(i);
        }
    }
}

bool isprime(ll k){
    if(k%2==0) return false; //o(1) for all small prime
    for(int i=0;i<(int) primes.size();i++)
        if(k%primes[i]==0 && k!=primes[i])
            return false;
    return true;
}
int main(){
    ll k;cin>>k;
    sieve();
    return 0;
}