#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define IOS ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define endl "\n"
#define REP(i,n) for(int i=0;i<n;i++)
#define REPJ(j,n) for(int j=0;j<n;j++)
#define PER(i,n) for(int i=n;i>0;i--)
#define REP1(i,n) for(int i=1;i<=n;i++)
#define REPJ1(j,n) for(int j=1;j<=n;j++)
#define ull unsigned long long int
#define ld long double
#define prec(n) fixed<<setprecision(n)
#define test ll t; cin>>t; while(t--)
#define re return 0
#define pb push_back()
int main()
{
	IOS;
	test{
		ll n;
		cin>>n;
/*		int a[n];
		REP(i,n){
			cin>>a[i];
		}
        */
        // checking prime in o(n)
        //most naive method
/*        for(int i=2;i<n;i++){
            if(n%i==0){
                p++;
            }
        }
        if(p!=0){
            cout<<"N is not Prime"<<"\n";
        }else{
            cout<<"N is Prime"<<"\n";
        }
        */
        // checking prime in o(sqrt(n))
        //By Divion theory diviors always exits in pair 
        // if one of them is less than other then it must be less than sqrt(n) and other would be greater than sqrt(n)
        // a=N/b, if a<b then a<sqrt(n) and b>sqrt(n)
 /*       int count=0,p=0;
        for(int i=2;i<=sqrt(n);i++){
            if(n%i!==0){
                p++;
            }
        }
        if(p==0){
            cout<<"Given number is Prime"<<"\n";
        }else{
            cout<<"Given number is not prime"<<"\n";
        }
        //Little more optimization in o(sqrt(n))
        //we can only check to odd no. because there is only one even prime number which is 2
        for(int i=3;i<=sqrt(n)/2;i+2){
            if(n%i==0){
                p++;
            }
        }
        if(p!=0){
            cout<<"Given number is not prime"<<"\n";
        }else{
            cout<<"Given number is prime"<<"\n";
        }
*/
        //we can still optimize this time complexity
       /* The third improvement12 which is already good enough13 for contest problems is to test
       if N is divisible by prime divisors ≤ √
       N. This is because if a prime number X cannot
       divide N, then there is no point testing whether multiples of X divide N or not. This is
       faster than O(√N) which is about O(#primes ≤ √N). For example, there are 500 odd
       numbers in [1..√106], but there are only 168 primes in the same range. Prime number
       theorem [56] says that the number of primes less than or equal to M—denoted by π(M)—is 
       bounded by O(M/(ln(M) − 1)). Therefore, the complexity of this prime testing function is
       about O(√N/ ln(√N)). 
       */
        //This is also called sieve of eratoshenes
        #include <bitset> // compact STL for Sieve, better than vector<bool>!
        ll _sieve_size; // ll is defined as: typedef long long ll;
        bitset<10000010> bs; // 10^7 should be enough for most cases
        vector<int>primes; // compact list of primes in form of vector<int >
        void sieve(ll upperbound){ // create list of primes in [0..upperbound]
        _sieve_size = upperbound + 1; // add 1 to include upperbo und
        bs.set(); // set all bits to 1
        bs[0] = bs[1] = 0; // except index 0 and 1
        for (ll i = 2; i <= _sieve_size; i++) 
        if (bs[i]){
        // cross out multiples of i starting from i * i!
        for (ll j = i * i; j <= _sieve_size; j += i)
        bs[j] = 0;
        primes.push_back((int)i); // add this prime to the list of primes
        } 
        } // call this method in main method
        bool isPrime(ll N) { // a good enough deterministic prime tester
        if (N <= _sieve_size) return bs[N]; // O(1) for small primes
        for (int i = 0; i < (int)primes.size(); i++)
        if (N % primes[i] == 0) return false;
        return true; // it takes longer time if N is a large prime!
        } // note: only work for N <= (last prime in vi "primes")^2
        // inside int main()
        sieve(10000000); // can go up to 10^7 (need few seconds)
        printf("%d\n", isPrime(2147483647)); // 10-digits prime
        printf("%d\n", isPrime(136117223861LL)); // not a prime, 104729*1299709
	    }
	re;
}
