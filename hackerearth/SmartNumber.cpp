#include<bits/stdc++.h>
using namespace std;
using ll=long long int;
int CountFactors(int n){
    int cnt=0;
    for(int i=1;i*i<=n;i++){
        if(n%i==0 && n/i!=i){
            cnt+=2;
        }else if(n%i==0 && n/i==i){
            cnt+=1;
        }
    }
    return cnt;
}
int main(){
    int t;cin>>t;while(t--){
        int n;cin>>n;
        int p=CountFactors(n);
        if(p%2==0){
            cout<<"NO"<<"\n";
        }else{
            cout<<"YES"<<"\n";
        }
    }
    return 0;
}