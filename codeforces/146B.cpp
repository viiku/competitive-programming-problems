#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int main(){
    ll a,b;
    cin>>a>>b;
    if(b%10==0){
        cout<<b<<"\n";
    }else{
        int p=0;
        while(b!=0){
            b%10;
            p++;
            b/=10;
        }
        cout<<p;
    }
}
