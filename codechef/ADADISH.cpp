#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;cin>>t;while(t--){
        int n;cin>>n;
        int a[n],sum=0;
        for(int i=0;i<n;i++){
            cin>>a[i];
            sum+=a[i];
        }
        if(n==1){
            cout<<a[0]<<"\n";
        }else if(n==2){
            if(a[0]==a[1]){
                cout<<a[0]<<"\n";
            }else{
                cout<<max(a[0],a[1])<<"\n";
            }
        }else if(n==3){
            sort(a,a+n);
            if(a[0]+a[1]==a[2]){
                cout<<a[2]<<"\n";
            }else if(a[0]==a[1]==a[2]){
                cout<<a[0]+a[1]<<"\n";
            }else if()
        }
    }
}