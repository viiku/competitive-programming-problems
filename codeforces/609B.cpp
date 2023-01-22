#include<bits/stdc++.h>
using namespace std;
using ll=long long int;
int main(){
    int n,m;cin>>n>>m;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    ll cnt=0;
    for(int i=0;i<n;i++){
        for(int j=i;j<n;j++){
            if(a[i]!=a[j]){
                cnt++;
            }
        }
    }
    cout<<cnt<<"\n";
    return 0;
}