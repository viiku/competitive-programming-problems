#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,t;cin>>n>>t;
    for(int i=1;i<=n;i++){
        if(t==2){
            cout<<2;
        }else if(t==3){
            cout<<3;
        }else if(t==4){
            cout<<4;
        }else if(t==5){
            cout<<5;
        }else if(t==6){
            cout<<6;
        }else if(t==7){
            cout<<7;
        }else if(t==8){
            cout<<8;
        }else if(t==9){
            cout<<9;
        }else if(t==10 && n!=1){
            if(n%2==0){
                cout<<10;
                n-=1;
            }else{
                if(i<=(n-1)){
                    cout<<1;
                }else if(i==n){
                    cout<<0;
                }
            }
        }else if(n<t){
            cout<<-1;
            break;
        }
    }
    return 0;
}