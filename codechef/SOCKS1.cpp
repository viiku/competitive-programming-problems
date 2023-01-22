/* Date:02-04-2021 */
/* Time:17:39:55 */
#include<bits/stdc++.h>
using namespace std;
#define IOS ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);
int main(){
    IOS;
    int a,b,c;cin>>a>>b>>c;
    if(a==b || b==c || c==a){
        cout<<"YES\n";
    }else{
        cout<<"NO\n";
    }
}