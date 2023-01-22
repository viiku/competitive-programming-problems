#include<bits/stdc++.h>
using namespace std;
const int maxn=1e6+7;
int n,t;
bool a[maxn]={false};
vector<int>primes;
void sieve(){
    a[0]=a[1]=true;
    primes.push_back(2);
    for(int i=2;i<=maxn;i+=2){
        a[i]=true;       
    }
    for(int i=3;i*i<=maxn;i+=2){
        if(!a[i]){
            for(int j=i*i;j<=maxn;j+=i){
                a[j]=true;
            }
        }
    }
    for(int i=3;i<=maxn;i++){
        if(!a[i]){
            primes.push_back(i);
        }
    }
}
int main(){
    sieve();
    cin>>t;while(t--){
        cin>>n;
        int i=0;
        while(primes[i]*primes[i]<=n){
            if(n%primes[i]==0){
                while(n%primes[i]==0){
                    n/=primes[i];
                    cout<<primes[i]<<" ";               
                }
            }
            i++;
        }
    }
}