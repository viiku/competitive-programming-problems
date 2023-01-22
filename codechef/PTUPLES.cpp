#include<bits/stdc++.h>
using namespace std;
using ll=long long int;
// Creating sieve of length up to 99999999(<10^8)
ll sieve_size=1000001;
//creating a  bool array of this size;
bool bs[1000001]={false};
set<int>s;
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
    s.insert(2);
    for(int i=3;i<=sieve_size;i++){
        if(!bs[i]){
            primes.push_back(i);
            s.insert(i);
        }
    }
    //Here primes size will denote the number of primes. 
}
int main(){
    sieve();
    int t,n;cin>>t;while(t--){
        cin>>n;
        int cnt=0;
        int i=0;
        while(primes[i]<=n){
            if(s.count())
        }
        cout<<cnt<<endl;
    }
}