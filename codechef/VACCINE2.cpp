#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;cin>>t;while(t--){
        int n,cnt=0,d;cin>>n>>d;
        int a[n];
        for(int i=0;i<n;i++){
            cin>>a[i];
            if(a[i]>=80 || a[i]<=9){
                cnt++;
            }
        }
        int p=0,q=n-cnt;
        if(cnt%d!=0){
            p=cnt/d+1;
            if(q%d==0){
                cout<<p+q/d<<"\n";
            }else{
                cout<<p+q/d+1<<"\n";
            }
        }else{
            p=cnt/d;
            if(q%d==0){
                cout<<p+q/d<<"\n";
            }else{
                cout<<p+q/d+1<<"\n";
            }
        }
    }
    return 0;
}