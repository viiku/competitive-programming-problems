#include<bits/stdc++.h>
using namespace std;
int main(){
    int t,sum=0;cin>>t;while(t--){
        int n;cin>>n;
        int a[n][n];
        for(int i=0;i<n;i++){
            int mx=0;
            for(int j=0;j<i+1;j++){
                cin>>a[i][j];
                mx=max(mx,a[i][j]);
            }
            cout<<mx<<" ";
//            cout<<"\n";
//            sum+=mx;
        }
//        cout<<sum<<"\n";
    }
    return 0;
}