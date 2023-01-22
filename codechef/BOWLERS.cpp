#include<bits/stdc++.h>
using namespace std;
using ll=long long int;
int main(){
    int t;cin>>t;while(t--){
        int n,k,l;cin>>n>>k>>l;
        if(n>(k*l)){
            cout<<-1<<"\n";
        }else{
            int j=1,p=k;
            for(int i=1;i<=n;i++){
                if(i<=k){
                    cout<<i<<" ";
                }else{
                    if(j<=p){
                        cout<<j<<" ";
                    }
                }
            }
        }
    }
}