#include<bits/stdc++.h>
using namespace std;
using ll=long long int;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        for(int i=1;i<=n;i++){
            ll x,a,b,chefu=0;
            cin>>x>>a>>b;
            if(x==1){
                cout<<"YES"<<"\n";
                chefu+=a;
            }else if(x==2){
                if(chefu!=0){
                    
                }
            }
        }
    }
}