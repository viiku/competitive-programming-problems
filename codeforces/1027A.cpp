#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;cin>>t;while(2*t--){
        int n;string str;cin>>n>>str;
        bool ok=true;
        int j=str.size()-1;
        for(int i=0;i<str.size()/2;i++){
            if(abs(str[i]-str[j])>1 && i<j){
                ok=false;
            }
        }
        if(ok){
            cout<<"YES"<<"\n";
        }else{
            cout<<"NO"<<"\n";
        }
    }
    return 0;
}