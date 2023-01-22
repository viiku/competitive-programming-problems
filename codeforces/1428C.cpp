#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;cin>>t;while(t--){
        stack<char>stk;
        string str;cin>>str;
        for(int i=0;i<str.size();i++){
            if(stk.empty()){
                stk.push(str[i]);
            }else if(stk.top()=='A' && str[i]=='B' || stk.top()=='B' && str[i]=='B'){
                stk.pop();
            }else{
                stk.push(str[i]);
            }
        }
        cout<<stk.size()<<"\n";
    }
    return 0;
}