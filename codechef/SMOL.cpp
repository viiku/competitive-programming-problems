/*27-02-2021*/
#include<bits/stdc++.h>
using namespace std;
#define IOS ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);
int main(){
    IOS;
    int t,n,k;cin>>t;while(t--){
        cin>>n>>k;
        if(k==0){
            cout<<n<<endl;
        }else{
            cout<<n%k<<endl;
        }
    }
}