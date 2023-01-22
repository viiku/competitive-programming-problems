#include<bits/stdc++.h>
using namespace std;
int main(){
    int t,n,c01,c10;cin>>t;while(t--){
        cin>>n>>c01>>c10;
        int a[n];
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        int x=0;
        for(int i=1;i<n-1;i++){
            if(a[i]==1){
                if(a[i-1]==a[i]){
                    x+=c10;
                }

                if(a[i+1]==a[i]){
                    x+=
                }
            }
        }
        cout<<x<<endl;
    }
}