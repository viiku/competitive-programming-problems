#include<bits/stdc++.h>
using namespace std;
int main(){
    int t,n;cin>>t;while(t--){
        cin>>n;
        int k=n%7;
        if(k==0){
            cout<<"Sunday\n";
        }else if(k==1){
            cout<<"Monday\n";
        }else if(k==2){
            cout<<"Tuesday\n";
        }else if(k==3){
            cout<<"Wednesday\n";
        }else if(k==4){
            cout<<"Thrusday\n";
        }else if(k==5){
            cout<<"Friday\n";
        }else if(k==6){
            cout<<"Saturday\n";
        }
    }
}