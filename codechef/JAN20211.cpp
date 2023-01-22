#include<bits/stdc++.h>
using namespace std;
int main(){
    int t,n;cin>>t;while(t--){
        cin>>n;
        int k=__builtin_popcount(n);
        if(k%2==0){
            cout<<"Magical\n";
        }else{
            cout<<"Non-Magical\n";
        }
    }
}