#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,d;cin>>n>>d;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int p=d%n;
    for(int i=p;i<n;i++){
        cout<<a[i]<<" ";
    }
    for(int i=0;i<p;i++){
        cout<<a[i]<<" ";
    }
}