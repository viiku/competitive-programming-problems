#include<bits/stdc++.h>
using namespace std;
using ll=long long int;
int main(){
    int n,a,b;cin>>n>>a>>b;
    int ar[n];
    ll sum=0,cnt=0;
    for(int i=0;i<n;i++){
        cin>>ar[i];
        sum+=ar[i];
    }
    int ans=ar[0];
    sort(ar+1,ar+n);
    for(int i=n-1;i>0;i--){
        if(ans*b/sum >= a){
            break;
        }
        sum=sum-ar[i];
        cnt++;
    }
    cout<<cnt<<endl;
}