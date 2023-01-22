#include<bits/stdc++.h>
using namespace std;
int main(){
    int t,k,n;cin>>t;while(t--){
        cin>>k>>n;
        int a[n];
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        int first=1e9,last=-1;
        for(int i=0;i<n;i++){
            if(a[i]==k){
                first=min(i+1,first);
                last=max(i+1,last);
            }
        }
        if(first==last){
            cout<<"-1";
        }else if(first!=1e9 && last!=-1){
            cout<<first<<" "<<last;
        }else{
            cout<<"-1";
        }
        cout<<"\n";
    }
    return 0;
}