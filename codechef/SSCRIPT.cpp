/* Date:02-04-2021 */
/* Time:18:16:33 */
#include<bits/stdc++.h>
using namespace std;
#define IOS ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);
int main(){
    IOS;
    int t,n,k;string str;cin>>t;while(t--){
        cin>>n>>k>>str;
        int i=0,j=0,mx=0,cnt=0;
        while(j<n){
            if(str[j]=='*'){
                cnt++;
            }else{
                cnt=0;
            }
            j++;
            mx=max(mx,cnt);
        }
        if(mx>=k){
            cout<<"YES\n";
        }else{
            cout<<"NO\n";
        }
    }
}