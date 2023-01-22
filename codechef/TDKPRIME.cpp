#include<bits/stdc++.h>
using namespace std;
using ll=long long int;
// Creating sieve of length up to 10^7
vector<int>primes;
bool bs[90000001]={false};
void sieve(){
    int sieve_size=90000000;
    bs[0]=bs[1]=true; //Except index 0 and 1
    for(int i=2;i*i<=sieve_size;i++){
        if(!bs[i]){
            for(int j=i*i;j<=sieve_size;j+=i){
                bs[j]=true;
            }
        }
    }
    for(int i=2;i<=sieve_size;i++){
        if(!bs[i]){
            primes.push_back(i);
        }
    }
    //O(kloglogk)
}
int main(){
    int q,n;cin>>q;
    sieve();
    while(q--){
        cin>>n;
        cout<<primes[n-1]<<"\n";
    }               
}    