#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;cin>>n;
    int a[n];
    for(int i=0;i<n;i++) cin>>a[i];
    if(n<3){
        cout<<0<<"\n";
    }else{
        // sort(a,a+n);
        cout<<n-2<<endl;
    }
    return 0;
}