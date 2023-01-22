#include<bits/stdc++.h>
using namespace std;
int main(){
    stack<int>stk;
    int n,x,type,mx=0;cin>>n;while(n>0){
        cin>>type;
        if(type==1){
            cin>>x;
            if(stk.empty()){
                stk.push(x);
            }else{
                stk.push(max(x,stk.top()));
            }
        }else if(type==2){
            if(!stk.empty()){
                stk.pop();
            }
        }else if(type==3){
            cout<<stk.top()<<"\n";
        }
        n--;
    }
    return 0;
}