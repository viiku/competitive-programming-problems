#include<bits/stdc++.h>
using namespace std;
using ll=long long int;
int main(){
    int t,n;cin>>t;while(t--){
        cin>>n;
        int a[n][n];
        ll sum=0;
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                cin>>a[i][j];
                if((i==j) || (i+j)==(n-1)){
                    sum+=a[i][j];
                }
            }
        }
        cout<<sum<<endl;
    }
}