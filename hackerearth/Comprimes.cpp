#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;cin>>n;
    int mx=1;
    for(int i=1;i<n-1;i++){
        if(__gcd(i,n)==1){
            mx=max(mx,i);
        }
    }
    cout<<mx<<"\n";
}