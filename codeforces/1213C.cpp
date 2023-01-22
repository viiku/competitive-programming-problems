#include<bits/stdc++.h>
using  namespace std;
using ll =long long int;
int  main(){
    int q;cin>>q;
    while(q--){
        ll n,m;cin>>n>>m;
        ll q=n/m;
        if(n%m==0){
            ll sum=0;
            for(int i=1;i<=q && i<=n;i++){
                if(n%m==0){
                    sum+=(m%10);
                    m+=m;
                }
            }
            cout<<sum<<"\n";
        }else{
            ll p=n%m,sum=0;
            n-=p;
            for(int i=1;i<=q;i++){
                if(n%m==0){
                    m+=m;
                    sum+=(m%10);
                }
            }
            cout<<sum<<"\n";
        }
    }
    return 0;
}