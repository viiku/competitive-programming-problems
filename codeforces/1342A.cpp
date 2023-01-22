#include<bits/stdc++.h>
using namespace std;
using ll=long long int;
ll x,y,a,b;
void solve_test(){
    cin>>x>>y>>a>>b;
    if(x==y){
        if(a>=b){
            cout<<b*x<<"\n";
        }else if(a<b){
            cout<<min(a*x+a*y,b*y)<<"\n";
        }
    }else if(x>y){
        cout<<min((x-y)*a+y*b,x*a+y*a)<<"\n";
    }else{
        cout<<min((y-x)*a+x*b,a*x+y*a)<<"\n";
    }
}
int main(){
    int t;cin>>t;while(t--){
        solve_test();
    }
    return 0;
}