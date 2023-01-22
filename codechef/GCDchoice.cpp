#include<bits/stdc++.h>
using namespace std;
using ll=long long int;
int main(){
    int n;
    cin>>n;
    int a[n],mx=1;
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    for(int i=0;i<=n-2;i++){
        mx=max(__gcd(a[i],a[i+1]),mx);
    }
    cout<<mx<<"\n";
    return 0;
}