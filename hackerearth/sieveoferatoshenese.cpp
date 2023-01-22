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
        // Generating all primes till n
        bitset<10000010>bs; //Make bitset size accroding to question requirements,
        vector<ll>vi;
        bs.set(); //set all elements fronm bitset to 1
        bs[0]=0;
        bs[1]=0;
        for(ll i=2;i<=sqrt(n);i++){
            if(bs[i]==true){
                for(ll j=i*i;j<=n;j=i+j){
                    bs[j]=0;
                }
                vi.emplace_back(i);
            }
        }
        vector<ll>::iterator it;
        for(it=vi.begin()+2;it!=vi.end();++it){
            cout<<*it<<" ";
        }
        cout<<"\n"<<vi.size()<<"\n";
        
        // Time complexity is o(loglog(n))
        //space complexity is o(n)
        vector<char>is_prime(n+1,true);
        is_prime[0]=is_prime[1]=false;
        for(int i=2;i<n;i++){
            if(is_prime[i] && (long long)i*i<=n){
                for(int j=i*i;j<=n;j+=i){
                    is_prime[j]=false;
                }
            }
        }
        //The number of prime numbers less than or equal to n is approximately nln(n).
        //The k-th prime number approximately equals k(ln(k)) (that follows 
        //immediately from the previous fact).


        //Different optimization on sieve
        //sieving till root
        vector<char>is_prime(n+1,true);
        is_prime[0]=is_prime[1]=false;
        for(int i=2;i*i<=n;i++){
            if(is_prime[i]){
                for(int j=i*i;j<=n;j+=i){
                    is_prime[j]=false;
                }
            }
        }
        //This optimization doesnt affect too much on time comexity
        //Time complexity nlognlog(sqrt(n))+o(n)


        //sieving by only odd numbers
        //Since all even numbers (except 2) are composite, we can stop checking even numbers at all. 
        //Instead, we need to operate with odd numbers only.
        //first, it will allow us to half the needed memory. 
        //Second, it will reduce the number of operations performing by algorithm approximately in half.


        /*SEGMENTED SIEVE */
    int count_primes(int n) {
    const int S = 10000;

    vector<int> primes;
    int nsqrt = sqrt(n);
    vector<char> is_prime(nsqrt + 1, true);
    for (int i = 2; i <= nsqrt; i++) {
        if (is_prime[i]) {
            primes.push_back(i);
            for (int j = i * i; j <= nsqrt; j += i)
                is_prime[j] = false;
        }
    }

    int result = 0;
    vector<char> block(S);
    for (int k = 0; k * S <= n; k++) {
        fill(block.begin(), block.end(), true);
        int start = k * S;
        for (int p : primes) {
            int start_idx = (start + p - 1) / p;
            int j = max(start_idx, p) * p - start;
            for (; j < S; j += p)
                block[j] = false;
        }
        if (k == 0)
            block[0] = block[1] = false;
        for (int i = 0; i < S && start + i <= n; i++) {
            if (block[i])
                result++;
        }
    }
    return result;
}
//    The running time of block sieving is the same as for regular sieve of Eratosthenes (unless the size of the blocks is very small), 
//    but the needed memory will shorten to O(sqrt(n)+S) and we have better caching results. 
//    On the other hand, there will be a division for each pair of a block and prime number from [1;sqrt(n)], 
//    and that will be far worse for smaller block sizes. Hence, it is necessary to keep balance when selecting the constant S. 
//    We achieved the best results for block sizes between 10^4 and 10^5.
	}
    re;
}
