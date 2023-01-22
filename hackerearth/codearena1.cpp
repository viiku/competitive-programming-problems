#include<bits/stdc++.h>
using namespace std;
int main(){
    int t,n,m;cin>>t;while(t--){
        cin>>n>>m;
        int a[n],b[m];
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        for(int i=0;i<m;i++){
            cin>>b[i];
        }
        sort(a,a+n);
        sort(b,b+m);
        int i=0,j=0,cnt=0;
        while(i<n && j<m){
            if((a[i]>b[j] && i<n && j<m)){
                cnt++;
                i++;j++;
            }else{
                j++;
            }
        }
        if(cnt==n){
            cout<<"YES\n";
        }else{
            cout<<"NO\n";
        }
    }
}