/*07-03-2021*/
#include<bits/stdc++.h>
using namespace std;
using ll=long long int;
#define IOS ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);
int main(){
    IOS;
    int t,n;cin>>t>>n;while(t--){
        int a[n];
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        ll mx=1e6;
        for(int i=0;i<n-1;i++){
            stack<int>stk;
            for(int j=0;j<n;j++){
                if(stk.empty()){
                    stk.push(a[i]);
                }else if(a[j]>stk.top() && j>i){
                    stk.push(a[j]);
                }else if(a[j]<=stk.top() && j<i){
                    stk.push(a[j]);
                }
            }
            ll sum=0;
            while(!stk.empty()){
                sum+=stk.top();
                stk.pop();
            }
            cout<<sum<<" ";
            mx=max(mx,sum);
        }
        // cout<<mx<<endl;
    }
}