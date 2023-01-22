#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;string str;cin>>t;while(t--){
        cin>>str;
        int ones=0,zeros=0;
        for(int i=0;i<(int)str.size();i++){
            if(str[i]=='1'){
                ones++;
            }
        }
        zeros=(int)str.size()-ones;
        if(ones==(int)str.size()-1 || zeros==(int)str.size()-1){
            cout<<"Yes\n";
        }else{
            cout<<"No\n";
        }
    }
}