/*17-03-2021*/
#include<bits/stdc++.h>
using namespace std;
using ll=long long int;
#define IOS ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);
ll a[101]={0};
ll factorial(int n){
    a[0]=1;a[1]=1;a[2]=2;
    if(n<2){
        return 1;
    }else{
        for(int i=3;i<=n;i++){
            a[i]=a[i-1]*i;
        }
    }
    return a[n];
}
int main(){
    IOS;
    int t,n;cin>>t;while(t--){
        cin>>n;
        cout<<factorial(n)<<endl;
    }
}