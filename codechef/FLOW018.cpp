#include<bits/stdc++.h>
using namespace std;
using ll=long long int;
ll fact(int n){
    if(n==0)
        return 1;
    return n*fact(n-1);
}
int main(){
    int t;cin>>t;while(t--){
        int n;cin>>n;
        cout<<fact(n)<<"\n";
    }
    return 0;
}