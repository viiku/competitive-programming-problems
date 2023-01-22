#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;string str;cin>>t;while(t--){
        cin>>str;
        if(str[1]=='A'){
            int p=str[0]-'0';
            int k=str[2]-'0';
            int ans=p&k;
            for(int i=3;i<(int)str.size()-1;i++){
                if(str[i]=='A'){
                    int next=str[i+1]-'0';
                    ans&=next;
                }
            }
        }
    }
}