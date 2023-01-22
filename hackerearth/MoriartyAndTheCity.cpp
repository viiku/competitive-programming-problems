#include<bits/stdc++.h>
using namespace std;
using ll=long long int;
int main(){
    ll n,x,j=0,k=0,mx=0;cin>>n;while(n--){
        cin>>x;
        if(x==0){
            j++;
            mx=max(mx,j);
            k=0;
        }else{
            k++;
            mx=max(mx,k);
            j=0;
        }
    }
    cout<<mx<<"\n";
    return 0;
}