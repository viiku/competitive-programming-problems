#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;cin>>n;
    int a[n];
    for(int i=1;i<=n;i++){
        cin>>a[i];
    }
    bool ok=true;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            for(int k=1;k<=n;k++){
                if(i!=j && i!=k && j!=k){
                    if(a[i]==a[j]+a[k] && ok){
                        cout<<i<<" "<<j<<" "<<k;
                        ok=false;
                    }
                }
            }
        }
    }
    if(ok){
        cout<<-1<<endl;
    }
}