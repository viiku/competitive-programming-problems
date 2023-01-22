#include<bits/stdc++.h>
using namespace std;
using ll=long long int;
int main(){
    int n;cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    ll cnt=0;
    for(int i=0;i<n-1;i++){
        if(a[i]>a[i+1]){
            cnt+=a[i]-a[i+1];
        }
    }
    cout<<cnt<<endl;
}