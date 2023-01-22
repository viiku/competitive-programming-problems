#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;cin>>n;
    int a[n];
    for(int i=0;i<n;i++) cin>>a[i];
    int j=n-1,cnt=0;
    for(int i=0;i<n-1;i++){
        if(a[i]!=a[j] || a[i]+1==a[i+1]){
            cnt++;
            j--;
        }
    }
    cout<<cnt;
}