#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;string str;cin>>t;while(t--){
        cin>>str;
        stack<char>stk;
        for(int i=0;i<(int)str.size();i++){
            if(stk.empty()){
                stk.push(str[i]);
            }else if(stk.top()==str[i]){
                stk.pop();
            }else{
                stk.push(str[i]);
            }
        }
        if(stk.empty()){
            cout<<"KHALI\n";
        }else{
            string ptr;
            while(!stk.empty()){
                ptr.push_back(stk.top());
                stk.pop();
            }
            for(int i=(int)ptr.size()-1;i>=0;i--){
                cout<<ptr[i];
            }
            cout<<"\n";
        }
    }
    return 0;
}