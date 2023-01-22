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

