#include<bits/stdc++.h>
using namespace std;
using ll=long long int;
// Checked till 1 to 2^31 
bool isprime(ll n){    // miller rabin(deterministic version) with time complexity of O(log n)
		if(n<2)
				return false;
		for(ll x:{2,3,5,7,11,13,17,19,23,29,31,37}){
				if(n==x)
						return true;
				bool flag=true;
				ll r=1;
				ll t=1;
				while(r<=((n-1)>>__builtin_ctzll(n-1))){
						if(r&((n-1)>>__builtin_ctzll(n-1)))
								t=((ll)t*x)%n;
						x=((ll)x*x)%n;
						r<<=1;
				}
				if(t==1||t==n-1)
						flag=false;
				for(r=0;r<__builtin_ctzll(n-1);r++){
						t=((ll)t*t)%n;
						if(t==n-1)
								flag=false;
				}
				if(flag)
						return false;
		}
		return true;
}
 
int main(){
    ll n,x;cin>>n>>x;
    ll cnt=0;
    if(isprime(x)){
        if(x>n){
            cout<<0<<"\n";
        }else{
            cout<<2<<"\n";
        }
    }else{
        for(int i=1;i<=(x/2);i++){
            if(x%i==0){
                cnt++;
            }
        }
        if(x>n){
            cout<<cnt-1<<"\n";
        }else{
            cout<<cnt<<"\n";
        }
    }
    return 0;
}