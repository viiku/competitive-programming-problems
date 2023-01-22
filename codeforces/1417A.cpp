#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,k,p=0;
        cin>>n>>k;
        int a[n];
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        sort(a,a+n);
        if(n==2){
            if(a[0]>=k || a[1]>=k){
                cout<<0<<"\n";
            }else{
                k-=a[1];
                cout<<k/a[0]<<"\n";
            }
        }else{
            int sum=0;
            for(int i=1;i<n;i++){
                p=k-a[i];
                sum+=p/a[0];
            }
            cout<<sum<<"\n";
        }
    }
    return 0;
}