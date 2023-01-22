#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;cin>>n;
    int i=1,j=2;
    if(n<=3){
        if(n==1){
            cout<<1<<"\n";
        }else{
            cout<<"NO SOLUTION\n";
        }
    }else{
        while(j<=n){
            cout<<j<<" ";
            j+=2;
        }
        while(i<=n){
            cout<<i<<" ";
            i+=2;
        }
    }
}