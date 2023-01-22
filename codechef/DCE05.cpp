#include<bits/stdc++.h>
using namespace std;
int main(){
    int t,k;cin>>t;while(t--){
        int n;cin>>n;
        k=log2(n);
        cout<<pow(2,k)<<"\n";
    }
    return 0;
}