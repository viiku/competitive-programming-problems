#include<bits/stdc++.h>
using namespace std;
using ll=long long int;
// Creating sieve of length up to 99999999(<10^8)
ll sieve_size=100000;
//creating a  bool array of this size;
bool bs[100000]={false};
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
int main(){
    sieve();
    int a,b;cin>>a>>b;
    for(int i:primes){
        cout<<primes[i]<<" ";
    }
}