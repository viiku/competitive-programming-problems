#include<bits/stdc++.h>
using namespace std;
using ll=long long int;
// Creating sieve of length up to 99999999(<10^8)
ll t,n;
ll sieve_size=1000001;
//creating a  bool array of this size;
bool bs[1000001]={false};
vector<int>primes;
void sieve(){ //create list of primes in [0 to n]
    bs[0]=bs[1]=true; //Except index 0 and 1
    primes.push_back(2);
    for(int i=2;i<=sieve_size;i+=2){ //This loop will decrease the time complexity by 1/2 but it still O(sqrt(n)).
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
    //Here primes size will denote the number of primes. 
}
//EulerPhi(n)
//counting number of positive integers that are relatively prime to n
//Two number(a,b) are called relative prime if gcd(a,b)=1 e.g. 25 & 42
//Naive algorithm would be counting(increasing counter) the primes till 1 to (n-1)
//Iterating i to [1 to (n-1)] and increasing counter if gcd(i,n)=1; 
ll EulerPhi(ll k){
    ll i=0,count=k;
    while(i*i<=k){
        if(k%primes[i]==0){
            count-=count/primes[i]; // only unique factor
        }
        while(k%primes[i]==0){
            k/=primes[i];
        }
        i++;
    }
    if(k!=1){
        count-=count/k;
    }
    return count;
}
int main(){
    sieve();
    cin>>t;while(t--){
        cin>>n;
        cout<<EulerPhi(n)<<endl;
    }
}