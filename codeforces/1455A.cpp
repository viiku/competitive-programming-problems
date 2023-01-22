#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;string str;cin>>t;while(t--){
        cin>>str;
        if(str.size()==1){
            cout<<1<<"\n";
        }else{
            cout<<str.size()<<"\n";
        }
    }
    return 0;
}