#include<bits/stdc++.h>
using namespace std;
using ll=long long int;
int main(){
    ll n,p=0;
    cin>>n;
    if(n==1){
        cout<<1<<"\n";
    }else if(n!=1){
    while(n!=1){
        p++;
        if(p==1){
            cout<<n<<" ";
        }else if(p>1){
            if(n%2==0){
                n/=2;
                cout<<n<<" ";
            }else if(n%2!=0){
                n=(3*n)+1;
                cout<<n<<" ";
            }
        }
    }
/*    while(true){
        cout<<n<<" ";
        if(n==1) break;
        if(n%2==0) n/=2;
        else n=n*3+1;
    }
    cout<<"\n";
    */
}