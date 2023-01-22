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
bool ispalindrome(ll n){
    string str=to_string(n);
    int j=str.size()-1;
    for(int i=0;i<str.size();i++){
        if(str[i]!=str[j]){
            return false;
        }
        j--;
    }
    return true;
}
int main(){
    ll t,n;cin>>t;while(t--){
        cin>>n;
        if(ispalindrome(n) && isprime(n)){
            cout<<"Yes\n";
        }else{
            cout<<"No\n";
        }
    }
    return 0;
}