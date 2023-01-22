#include<bits/stdc++.h>
using namespace std;
using ll=long long int;
int main(){
    int t,x,y,a,b;cin>>t;while(t--){
        cin>>x>>y>>a>>b;
        ll z=(y-x)%(a+b);
        if(z==0){
            cout<<(y-x)/(a+b)<<"\n";
        }else{
            cout<<-1<<"\n";
        }
    }
    return 0;
}