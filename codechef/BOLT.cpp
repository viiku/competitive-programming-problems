/* Date:02-04-2021 */
/* Time:17:43:30 */
#include<bits/stdc++.h>
using namespace std;
#define IOS ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);
int main(){
    IOS;
    int t;cin>>t;while(t--){
        float k1,k2,k3,v;cin>>k1>>k2>>k3>>v;
        float p=k1*k2*k3*v;
        float d=(100/p);
        float value = (int)(d*100 + .5);
        float k=value/100;
        if(k<9.58){
            cout<<"YES\n";
        }else{
            cout<<"NO\n";
        }
        // cout<<d<<endl;
    }
}