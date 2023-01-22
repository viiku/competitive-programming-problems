#include<bits/stdc++.h>
using namespace std;
int main(){
    int t,n;cin>>t;while(2*t--){
        cin>>n;
        int a[n];
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        bool ok=false;
        for(int i=0;i<n-2;i++){
            if(a[i]<a[i+1] && a[i+1]>a[i+2]){
                ok=true;
                cout<<"YES\n"<<i+1<<" "<<i+2<<" "<<i+3<<"\n";
                break;
            }
        }
        if(!ok){
            cout<<"NO\n";
        }
    }
    return 0;
}