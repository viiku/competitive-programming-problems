#include<bits/stdc++.h>
using namespace std;
int main(){
    int t,n;cin>>t;while(t--){
        cin>>n;
        int a[n];
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        int cnt=0;
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                if(i!=j || a[i]!=a[j]){
                    if((__gcd(a[i],a[j])==a[i]/2 && a[i]%2==0) || (__gcd(a[i],a[j])==a[j]/2 && a[j]%2==0)){
                        cnt++;
                    }
                }
            }
        }
        cout<<cnt/2<<endl;
    }
}