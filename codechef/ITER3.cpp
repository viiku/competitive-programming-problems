#include<bits/stdc++.h>
using namespace std;
int main(){
    int t,n,k,m;cin>>t;while(t--){
        cin>>n>>k>>m;
        vector<int>a(n),b(n);
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        for(int i=0;i<n;i++){
            cin>>b[i];
        }
        int cnt=0;
        for(int i=0;i<n;i++){
            if(abs(a[i]-b[i])>k){
                cnt++;
            }
        }
        if(cnt>m){
            cout<<"0\n";
        }else if(cnt<=m){
            cout<<"1\n";
        }
    }
}