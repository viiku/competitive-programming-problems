/* Date:27-03-2021 */
/* Time:19:45:39 */
#include<bits/stdc++.h>
using namespace std;
#define IOS ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);
int main(){
    IOS;
    int t,u,v,a,s;cin>>t;while(t--){
        cin>>u>>v>>a>>s;
        int k=u*u-2*a*s;
        double v1=sqrt(k);
        if(v1<=v || k<=0){
            cout<<"Yes\n";
        }else{
            cout<<"NO\n";
        }
    }
}