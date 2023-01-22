#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;cin>>t;while(t--){
        int n,p=0,q=0,cnt=0;cin>>n;
        while(n>=1){
            p=sqrt(n);
            cnt++;
            q=n-pow(p,2);
            n=q;
        }
        cout<<cnt<<"\n";
    }
    return 0;
}