/* Date:27-03-2021 */
/* Time:19:37:31 */
#include<bits/stdc++.h>
using namespace std;
using ll=long long int;
#define IOS ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);
int main(){
    IOS;
    int t,n;cin>>t;while(t--){
        cin>>n;
        int a[n];
        ll sum=0,cnt=0,cnt1=0;
        for(int i=0;i<n;i++){
            cin>>a[i];
            sum+=a[i];
            if(a[i]==2){
                cnt++;
            }
        }
        if(sum%2==0){
            cout<<0<<endl;
        }else{
            if(cnt!=0){
                cout<<1<<endl;
            }else{
                cout<<-1<<endl;
            }
        }
    }
}