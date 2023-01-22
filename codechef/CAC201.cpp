/* Date:22-03-2021 */
/* Time:20:17:33 */
#include<bits/stdc++.h>
using namespace std;
#define IOS ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);
int main(){
    IOS;
    int t,n,q,x,v,l,r;cin>>t;while(t--){
        cin>>n>>q;
        int a[n],w[n];
        for(int i=1;i<=n;i++){
            cin>>a[i];
        }
        for(int i=1;i<=n;i++){
            cin>>w[i];
        }
        while(q--){
            cin>>type;
            if(type==1){
                cin>>x;
            }else if(type==2){
                cin>>v>>l>>r;
            }
        }
    }
}