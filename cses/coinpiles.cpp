#include<bits/stdc++.h>
using namespace std;
using ll=long long int;
int main(){
    int t,a,b;cin>>t;while(t--){
        cin>>a>>b;
        ll k=a+b;
//        if(k%3==0){
            if((max(a,b)-min(a,b))%2==0){
                cout<<"YES\n";
            }else{
                cout<<"NO\n";
            }
//        }else{
//            cout<<"NO\n"; 
//       }
    }
    return 0;
}