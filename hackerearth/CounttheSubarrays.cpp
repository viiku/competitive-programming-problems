/*12-03-2021*/
#include<bits/stdc++.h>
using namespace std;
using ll=long long int;
#define IOS ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);
int main(){
    IOS;
    ll t,n,k;cin>>t;while(t--){
        cin>>n>>k;
        ll a[n];
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        // sort(a,a+n);
        int i=0,j=0;
        ll sum=0,cnt=0;
        while(j<n){
            if(sum<k){
                sum+=a[j];
 
                cnt++;
                j++;
                while(sum>=k){
                    sum-=a[i];
                    i++;
                }
                if(sum<k){
                    cnt++;
                }                
            }else{
                while(sum>=k){
                    sum-=a[i];
                    i++;
                }
                if(sum<k){
                    cnt++;
                }
                j++;
            }
        }
        cout<<cnt<<endl;
    }
}