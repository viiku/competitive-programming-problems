#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    sort(a,a+n);
    if(n==1){
        if(a[0]==1){
            cout<<2<<"\n";
        }else if(a[0]>1){
            cout<<1<<"\n";
        }
    }else if(n>1){
        for(int i=0;i<=n;i++){
            if(a[i]!=i+1){
                cout<<i+1<<"\n";
                break;
            }else if(a[i]==i+1){
                i;
            }
        }
    }
}