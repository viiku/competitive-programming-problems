/* Date:26-03-2021 */
/* Time:17:06:54 */
#include<bits/stdc++.h>
using namespace std;
#define IOS ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);
int main(){
    IOS;
    int t,n,k;cin>>t;while(t--){
        cin>>n>>k;
        int a[n],prefixsum[n+1];
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        for(int i=0;i<k;i++){
            for(int j=n-2;j>=0;j--){
                if(a[j]>=2){
                    a[j]-=2;
                    a[j+1]+=2;
                }
            }
        }
        int mx=INT_MIN;
        for(int i=0;i<n;i++){
            mx=max(mx,a[i]);
        }
        cout<<mx<<endl;
    }
}