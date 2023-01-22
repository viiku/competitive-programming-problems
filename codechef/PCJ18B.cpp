#include<bits/stdc++.h>
using namespace std;
int main(){
    int t,n,cnt=0;cin>>t;while(t--){
        cin>>n;
        cnt=0;
        for(int i=1;i<=n;i=i+2){
            int k=n-i+1;
            cnt+=(k*k);
        }
        cout<<cnt<<"\n";
    }
    return 0;
}