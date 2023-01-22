#include<bits/stdc++.h>
typedef long long ll;
using namespace std;
const ll MOD=1e9+7;
/*
F(i)=F(i-1)+F(i-2)=2*(F(i-2))+F(i-3)=3*(F(i-3))+2*(F(i-4)....
If you keep on with the formula, assuming F(0)=1 and F(1)=1, you'll reach a point where...
if i is even
F(i)=F(i/2)*F(i/2)+F((i/2)-1)

 (if i is odd)
 F(i)=(F(higher(i/2))*F(lower(i/2)))+F(lower(i/2))*F(lower(i/2)-1)
Or, generalizing for every i...
F(i)=F(lower((i+1)/2))*F(lower(i/2))+F(lower((i-1)/2))+F(lower((i-1)/2)*F(lower((i-2)/2)
Using those formulas and a recursive function with memoization, you can run the algorithm in no time.
*/
unordered_map<ll,ll>Fib;
ll fib(ll n){
    if(n<2) return 1;
    if(Fib.find(n)!=Fib.end()) return Fib[n];
    Fib[n]=(fib((n+1)/2)*fib(n/2)+fib((n-1)/2)*fib((n-2)/2))%MOD;
    return Fib[n];
}
int main(){
    while(true){
        ll N;
        cin>>N;
        if(N<=0) return 0;
        cout<<fib(N)<<"\n";
    }
}