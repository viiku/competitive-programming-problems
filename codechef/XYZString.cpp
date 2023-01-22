#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;string str;cin>>t;while(t--){
        cin>>str;
        int cntx=count(str.begin(),str.end(),'x');
        int cnty=count(str.begin(),str.end(),'y');
        int cntz=count(str.begin(),str.end(),'z');
        if(cntx>=2 && cnty>=2 && cntz>=2){
            cout<<"YES\n";
        }else{
            cout<<"NO\n";
        }
    }
    return 0;
}