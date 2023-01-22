#include<bits/stdc++.h>
using namespace std;
// Creating sieve of length up to 10^7
// outside main function
ll sieve_size;
bitset<10000010>bs;
vector<int>primes;

void sieve(ll n){ //create list of primes in [0 to n]
    sieve_size=n+1; // adding 1 to include n
    bs.set();  //set all bits to 1
    bs[0]=bs[1]=false; //Except index 0 and 1
    for(ll i=2;i<=sieve_size;i++) if(bs[i]) {
        for(ll j=i*i;j<=sieve_size;j+=i) bs[j]=0;
        primes.push_back((int) i);
    }
    //O(kloglogk)
}
//Number of different prime factors
ll numDiffPF(ll k){
    ll i=0,count2=0;
    while(primes[i]*primes[i]<=k){
        if(k%primes[i]==0){
            while(k%primes[i]==0){
                k/=primes[i];
                count2++;
                break;
            }
            i++;
        }
    }
    return count2; 
}


//Modified sieve agorithm
// if 
memset(numDiffPF, 0, sizeof numDiffPF);
for (int i = 2; i < MAX_N; i++){
    if (numDiffPF[i] == 0){ // i is a prime number
        for (int j = i; j < MAX_N; j += i){
            numDiffPF[j]++; // increase the values of multiples of i
        }
    }
}

int main(){
    ll n;
    cin>>n;
}