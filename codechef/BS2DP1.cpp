#include<bits/stdc++.h>
using namespace std;
using ll=long long int;
int main(){
    int n,k;cin>>n>>k;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    sort(a,a+n,greater<int>());
    ll sum=0;
    int i=0,j=n-1;
    while(k>0){
        if(a[i]>0){
            sum+=a[i];
        }
    }
}