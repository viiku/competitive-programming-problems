#include<bits/stdc++.h>
using namespace std;
int main(){
    int t,n;cin>>t;while(t--){
        cin>>n;
        int a[n];
        for(int i=1;i<=n;i++){
            cin>>a[i];
        }
        int ans=0;
        for(int i=2;i<=n-1;i++){
            if(a[i]!=a[i+1] && a[i]!=a[i-1]){
                ans=i;
                break;
            }
        }
        if(ans==0){
            if(a[1]!=a[2]){
                cout<<1<<endl;
            }else if(a[n-1]!=a[n]){
                cout<<n<<endl;
            }
        }else{
            cout<<ans<<endl;
        }
    }
}