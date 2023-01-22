#include<bits/stdc++.h>
using namespace std;
int main(){
    int t,n;cin>>t;while(t--){
        cin.ignore();
        cin>>n;
        string str;
        cin>>str;
        stack<char>stk;
        bool ok=true;
        for(int i=0;i<(int)str.size();i++){
            if(str[i]=='H' || str[i]=='T'){
                if(stk.empty()){
                    if(str[i]=='T'){
                        ok=false;
                    }else{
                        stk.push(str[i]);
                    }
                }else if(stk.top()=='H' && str[i]=='T'){
                    stk.pop();
                }else if(stk.top()=='H' && str[i]=='H'){
                    ok=false;
                }else if(stk.top()=='Y' && str[i]=='T'){
                    ok=false;
                }else{
                    stk.push(str[i]);
                } 
            }
        }
        if(!stk.empty() || !ok){
            cout<<"Invalid\n";
        }else{
            cout<<"Valid\n";
        }
    }
}
