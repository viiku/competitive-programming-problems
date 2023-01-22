#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;string str;cin>>t;while(t--){
        stack<char>stk;
        cin>>str;
        int i=0;
        while(i<str.size()){
            if(stk.empty()){
                stk.push(str[i]);
            }else if(stk.top()==str[i]){
                stk.pop();
            }else if(stk.top()!=str[i]){
                stk.push(str[i]);
            }
            i++;
        }
        cout<<stk.size()<<"\n";
    }
    return 0;
}