/* Date:27-03-2021 */
/* Time:19:31:51 */
#include<bits/stdc++.h>
using namespace std;
#define IOS ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);
int main(){
    IOS;
    int t,n,x,si,ri,mx;cin>>t;while(t--){
        mx=0;
        cin>>n>>x;while(n--){
            cin>>si>>ri;
            if(si<=x){
                mx=max(mx,ri);
            }
        }
        cout<<mx<<endl;
    }
}