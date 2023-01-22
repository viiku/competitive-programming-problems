#include<bits/stdc++.h>
using namespace std;
using ll=long long int;
ll sieve_size; // Perfectly fine for smaller primes
bitset<10000010>bs; // This work upto 10^7 but takes few second
vector<ll>primes; 
void Sieve(ll k){
    sieve_size=k+1;
    bs.set(); //Initializing every bit to 1
    bs[0]=bs[1]=false; //Updating first two bits to 0
    for(ll i=2;i<=sieve_size;i++){
        if(bs[i]){
            for(ll j=i*i;j<=sieve_size;j+=i){
                bs[j]=false;
            }
            primes.emplace_back(i);
        }
    }
    for(ll i=0;i<primes.size();i++){
        cout<<primes[i]<<" ";
    }
  //  cout<<"\n";

  //o(nloglog(n))
}
/*
bool isPrime(ll n){
    if(n<=sieve_size) return bs[n];
    for(int i=0;i<primes.size();i++)
        if(n%primes[i]==0) return false;
    return true;

    //o(sqrt(n)/ln(sqrt(n)))
}

void numPF(ll n){
    ll i=0,count=0,sumPF=0;
    while(primes[i]*primes[i]<=n){
        while(n%primes[i]==0){
            sumPF+=primes[i];
            n=n/primes[i];
            count++;
        }
        primes[i++];
    }
    if(n!=1) count++; // special case if n is a prime
    cout<<count<<"\n"<<sumPF;
    
    //o(sqrt(n)/ln(sqrt(n)))
}
/*
void numDiffPF(ll n){ 
    ll i=0,count1=0;
    while(primes[i]*primes[i]<=n){
        while(n%primes[i]==0){
            cout<<primes[i]<<" ";
            n=n/primes[i];
            count1++;
            break;
        }
        primes[i++]; 
    }
}


ll CountDivisiorsll(){
    ll i=0,PF=primes[i],ans=1;
    while(PF*PF<=n){
        ll power=0;
        while(n%PF==0){
            n/=PF;
            power++;
        }
        ans*=power+1;
        PF=primes[i++];
    }
    if(n!=1) ans*=2; // Last factor has pow=1,we add 1 to it
    return ans;
}



ll SumDivi(ll n){
    ll i=0,PF=primes[i],ans=1;
    while(PF*PF<=n){
        ll power=0;
        while(n%PF==0){
            n/=PF;
            power++;
        }
        ans*(ll pow((double)PF,power+1.0))/(PF-1);
        PF=primes[i++];
    }
    if(n!=1) ans*=((ll)pow((double)n,2.0)-1)/(n-1); //last
    return ans;
}

/// Euler Phi(n)

count no. of positive integers <n that are relatively prime to n.
Recall: Two integers a and b are said to b  relatively prime if
gcd(a,b)=1 e.g.=25 & 42.
Anaive algorithm to count the number of positive integers<n that are 
relatively prime to n statrts with counter=0,iterates through 
1<=i<=(n-1) and increases the counter if gcd(i,n)=1.
Naive approach is too slow for large numbers(n).

A Better algorithm is Eulers phi (totient) function.
phi(n)=n*(multiplication of prime factors(1-(1/PF))
where PF is prime factor of n.
Example: 36=2*2*3*3
where phi(36)=36*(1-(1/2))*(1-(1/3))=12
Those 12 posititve integers that are relatively prime to 36 are
{1,5,7,11,13,17,19,23,25,29,31,35}

ll EulerPhi(ll n){
    ll i=0,PF=primes[i],ans=n;
    while(PF*PF<=n){
        if(n%PF==0) ans-=ans/pf; // only count unique factor
        while(n%PF==0) n/=PF;
        PF=primes[i++];
    }
    if(n!=1) ans-=ans/n;
    return ans;
}
*/
int main(){
    ll n,p;
    cin>>n>>p;
    Sieve(n);
//    cout<<isPrime(p)<<"\n";
//    numPF(n);
//    numDiffPF(n);
     return 0;
} 