#include<bits/stdc++.h>
using namespace std;
int main(){
    int t,n;cin>>t;while(t--){
        cin>>n;
        if(n==1){
            for(int i=1;i<=9;i++){
                cout<<i<<endl;
            }
        }else if(n==2){
            for(int i=11;i<=99;i++){
                cout<<i<<endl;
            }
        }else if(n==3){
            for(int i=101;i<=999;i++){
                cout<<i<<endl;
            }
        }else if(n==4){
            for(int i=1001;i<=9999;i++){
                cout<<i<<endl;
            }
        }else if(n==5){
            for(int i=10001;i<=99999;i++){
                cout<<i<<endl;
            }
        }else if(n==6){
            for(int i=100001;i<=999999;i++){
                cout<<i<<endl;
            }
        }
    }
}