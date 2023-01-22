#include<bits/stdc++.h>
using namespace std;
using ll=long long int;
int main(){
    int n,k;cin>>n>>k;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int p=0,j=0;
/*    if(n==1){
        cout<<1<<"\n";
    }else if(n==2){
        if(a[0]!=a[1]){
            cout<<2<<"\n";
        }else{
            cout<<1<<"\n";
        }
    }else{*/
        for(int i=0;i<n-1;i++){
            if(a[i]!=a[i+1]){
                p++;
                j=max(j,p);
            }else{
                j=max(j,p);
                p=0;
            }
        }
        cout<<j+1<<"\n";
//    }
    return 0;
}