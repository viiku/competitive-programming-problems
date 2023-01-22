#include<bits/stdc++.h>
using namespace std;
int main(){
    int t,n;string str;cin>>t;while(t--){
        cin>>n>>str;
        stack<char>stk;
        for(int i=0;i<(int)str.size();i++){
            if(stk.empty()){
                stk.push(str[i]);
            }else if(stk.top()=='>' && str[i]=='<'){
                stk.pop();
            }else{
                stk.push(str[i]);
            }
        }
        // cout<<stk.size();
        if(stk.empty()){
            cout<<"legal\n";
        }else{
            cout<<"illegel\n";
        }
    }
}