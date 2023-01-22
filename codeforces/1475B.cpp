#include<bits/stdc++.h>
using namespace std;
int main(){
    int t,n;cin>>t;while(t--){
        cin>>n;
        int k=n-2020,p=n-2021;
        if(k<0 || p<0){
            cout<<"NO\n";
        }else{
            if(k%2020==0 || k%2020==2021 || k%2021==0 || k%2021==2020){
                cout<<"YES\n";
            }else if(p%2020==0 || p%2020==2021 || p%2021==0 || p%2021==2020){
                cout<<"YES\n";
            }else{
                cout<<"NO\n";
            }
        }
    }
}