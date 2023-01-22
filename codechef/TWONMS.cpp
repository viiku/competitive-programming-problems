#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;cin>>t;while(t--){
        int a,b,n;cin>>a>>b>>n;
        if(n%2==0){
            cout<<max(a,b)/min(a,b)<<"\n";
        }else{
            cout<<max(a*2,b)/min(a*2,b)<<"\n";
        }
    }
    return 0;
}
//TODO