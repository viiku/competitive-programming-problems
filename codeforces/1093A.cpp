#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;cin>>t;while(t--){
        int n;cin>>n;
        if(n<=7){
            cout<<1<<"\n";
        }else{
//            cout<<n/2<<"\n";
              cout<<(n/7)+1<<"\n";
        }
    }
}