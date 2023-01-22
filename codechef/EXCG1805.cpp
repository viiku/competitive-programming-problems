#include<bits/stdc++.h>
using namespace std;
using ll=long long int;
int main(){
    int n,p=0;
    cin>>n;
    if(n==1){
        cout<<0<<"\n";
    }else if(n!=1){
        while(n!=1){
            p++;
            if(n%2==0){
                n/=2;
            }else if(n%2!=0){
                n=(3*n)+1;
            }
        }
        cout<<p<<"\n";
    }
    return 0;
}