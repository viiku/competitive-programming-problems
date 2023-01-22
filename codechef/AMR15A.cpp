#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,p=0,q=0;cin>>n;
    int a[n];
    for(int i=1;i<=n;i++){
        cin>>a[i];
        if(a[i]%2==0){
            p++;
        }else{
            q++;
        }
    }
    if(p>q){
        cout<<"READY FOR BATTLE"<<"\n";
    }else{
        cout<<"NOT READY"<<"\n";
    }
}