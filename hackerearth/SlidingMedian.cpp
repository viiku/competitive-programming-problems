#include<bits/stdc++.h>
using namespace std;
using ll=long long int;
int main(){
    int n,k;
    cin>>n>>k;
    int a[n];
    ll sum=0;
    for(int i=0;i<n;i++){
        cin>>a[i];
        if(i<k){
            sum+=a[i];
        }
    }
    cout<<sum/k<<" ";
    int p=0;
    for(int i=k;i<n;i++){
        sum+=a[i]-a[i-k];
        cout<<sum/k<<" ";
    }
    return 0;
}