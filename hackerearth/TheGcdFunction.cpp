#include<bits/stdc++.h>
using namespace std;
const int mod=1e9;
int main(){
    int t,n;cin>>t;while(t--){
        cin>>n;
        int mx=0,mn=0,gcd=1,sum=0;
        for(int i=1;i<=n;i++){
            for(int j=1;j<=n;j++){
                gcd=max(gcd,__gcd(i,j));
                sum+=gcd;
            }
            if(sum>=mx){
                mx=sum;
                mn=i;
            }
            sum=0;
        }
        cout<<mx<<" "<<mn;
    }
}