#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;string str;cin>>t;while(t--){
        cin>>str;
        int cnt=0;
        for(int i=0;i<(int)str.size();i++){
            if(str[i]=='#'){
                cnt++;
            }
        }
        cout<<cnt<<endl;
    }
}