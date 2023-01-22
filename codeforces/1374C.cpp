#include<bits/stdc++.h>
using namespace std;
int main(){
    stack<char>stk;
    int t;cin>>t;while(t--){
        int n;string str;cin>>n>>str;
        int cnt=0,cnt1=0;
        for(int i=0;i<str.size();i++){
            if(stk.empty()){
               stk.push(str[i]);
            }else if(stk.top()=='(' && str[i]==')'){
                stk.pop();
            }else{
                stk.push(str[i]);
            }    
        }
        while(!stk.empty()){
            if(stk.top()=='('){
                cnt++;
                stk.pop();
            }else if(stk.top()==')'){
                cnt1++;
                stk.pop();
            }
        }
        cout<<(cnt+cnt1)/2<<"\n";
    }
    return 0;
}