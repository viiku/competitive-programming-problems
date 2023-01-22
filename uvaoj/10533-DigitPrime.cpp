/*09-03-2021*/
#include<bits/stdc++.h>
using namespace std;
using ll=long long int;
#define IOS ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);
// Creating sieve of length up to 99999999(<10^8)
ll sieve_size=1000000;
//creating a  bool array of this size;
bool bs[1000000]={false};
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
// int DigitPrimes(){
//     for(int i=0;i<(int)primes.size();i++){
//         int k=primes[i];
//     }
// }
int main(){
    IOS;
    sieve();
    int n,t1,t2;cin>>n;while(n--){
        cin>>t1>>t2;
    }
}