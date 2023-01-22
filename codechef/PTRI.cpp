#include<bits/stdc++.h>
using namespace std;
using ll=long long int;
// Creating sieve of length up to 10^7
vector<int>primes;
bool bs[99999999]={false};
void sieve(){
    int sieve_size=99999999;
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
    sieve();
    int t,n;cin>>t;while(t--){
        cin>>n;
    }
    return 0;               
}    