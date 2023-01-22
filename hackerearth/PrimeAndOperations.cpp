#include<bits/stdc++.h>
using namespace std;
using ll=long long int;
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

// a good enough deterministic prime tester
bool isPrime(ll k){
    if(k<=sieve_size) return bs[k]; // O(1) for small prime
    for(int i=0;i<(int)primes.size();i++)
        if(k%primes[i]==0) return false;
    return true; 
    //it takse longer time if n is large prime!
    //Only work for k<=(last prime in vector "prime")^2
    //O(primes) 
}

// Prime-power Factoriazation
void PrimeFactors(ll k){
    ll i=0,count1=0;
    while(primes[i]*primes[i]<=k){
        if(k%primes[i]==0){
            while(k%primes[i]==0){
                k/=primes[i];
                cout<<primes[i]<<" ";
            }
            i++;
        }
    }
}

//Number  of prime factors
ll numPF(ll k){
    ll i=0,count1=0;
    while(primes[i]*primes[i]<=k){
        if(k%primes[i]==0){
            while(k%primes[i]==0){
                k/=primes[i];
                count1++;
            }
            i++;
        }
    }
    return count1;   
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

ll sumPF(ll k){
    ll i=0,sumPF1=0;
    while(primes[i]*primes[i]<=k){
        if(k%primes[i]==0){
            while(k%primes[i]==0){
                k/=primes[i];
                sumPF1+=primes[i];
            }
            i++;
        }
    }
    return sumPF1; 
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


//Sum of Divisors of a number
ll sumDivi(ll k){
    ll i=0,sum=1;
    while(i*i<=k){
        ll power=0;
        while(k%primes[i]==0){
            k/=primes[i];
            power++;
        }
        sum*=((ll)pow((double)primes[i],power+1.0)-1)/(primes[i]-1);
        i++;        
    }
    if(k!=1) sum*=((ll)pow((double)k,2.0)-1)/(k-1);
    return sum;
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
    int n;
    cin>>n;
    sieve(n); //n=10000000 (need few second)
    cout<<isPrime(2147483647) // 10 Digit prime
    PrimeFactors(n);
    cout<<"\n";
    cout<<numPF(n)<<"\n";
    cout<<numDiffPF(n)<<"\n";
    cout<<sumPF(n)<<"\n";
    cout<<numDivi(n)<<"\n";
    cout<<sumDivi(n)<<"\n";
    cout<<EulerPhi(n)<<"\n";
}
