#include<bits/stdc++.h>
using namespace std;
int main(){
    stack<pair<int,int>>stk;
    int n,x,type,mx=-1;cin>>n;while(n--){
        cin>>type;
        if(type==1){
            cin>>x;
            mx=max(mx,x);
            stk.push(make_pair(mx,x));
        }else if(type==2){
            if(mx!=stk.top().first){
                stk.pop();
            }else{
                while(stk.top().first=)
            }
        }
    }
}