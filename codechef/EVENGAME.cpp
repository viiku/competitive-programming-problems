#include<bits/stdc++.h>
using namespace std;
int main(){
    int t,n;cin>>t;while(2*t--){
        cin>>n;
        int a[n],cnt=0,cnt1=0;
        for(int i=0;i<n;i++){
            cin>>a[i];
            if(a[i]%2==0){
                cnt++;
            }else{
                cnt1++;
            }
        }
        if(cnt%2!=0){
            cout<<2<<endl;
        }else{
            cout<<1<<endl;
        }
        
    }
}