#include<bits/stdc++.h>
using namespace std;
int main(){
    int t,n;cin>>t;while(t--){
        cin>>n;
        cout<<__builtin_popcount(n)<<endl; //count number of set bits(1s) in binary representation of a integer
    }
}