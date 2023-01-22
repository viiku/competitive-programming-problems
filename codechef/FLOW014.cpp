#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;cin>>t;while(t--){
        int ha,te;float ca;cin>>ha>>ca>>te;
        if(ha>50 && ca<0.7 && te>5600){
            cout<<10<<"\n";
        }else if(ha>50 && ca<0.7){
            cout<<9<<"\n";
        }else if(ca<0.7 && te>5600){
            cout<<8<<"\n";
        }else if(ha>50 && te>5600){
            cout<<7<<"\n";
        }else if(ha>50 || ca<0.7 || te>5600){
            cout<<6<<"\n";
        }else if(ha<50 && ca>0.7 && te<5600){
            cout<<5<<"\n";
        } 
    }
    return 0;
}