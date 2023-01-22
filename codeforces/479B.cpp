#include<bits/stdc++.h>
using namespace std;
using ll=long long int;
int main(){
    int n,k;cin>>n>>k;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    sort(a,a+n);
    int p=a[n-1]-a[0];
}