#include<bits/stdc++.h>
using namespace std;
using ll=long long int;
int main(){
    int n,q,x,l,r;cin>>n>>q;
    int a[n],b[n];
    for(int i=1;i<=n;i++){
        cin>>a[i];
    }
    for(int i=1;i<=n;i++){
        cin>>b[i];
    }   
    while(q--){
        cin>>x>>l>>r;
        if(x==1){
            bool ok=true;
            ll sum=0;
            for(int i=l;i<=r;i++){
                if(ok){
                    sum+=a[i];
                    ok=false;
                }else if(!ok){
                    sum+=b[i];
                    ok=true;
                }
            }
            cout<<sum<<endl;
        }else if(x==2){
            bool ok=true;
            ll sum=0;
            for(int i=l;i<=r;i++){
                if(ok){
                    sum+=b[i];
                    ok=false;
                }else if(!ok){
                    sum+=a[i];
                    ok=true;
                }
            }
            cout<<sum<<endl;
        }
    }
}