#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;string str;cin>>t;while(t--){
        cin>>str;
        stack<char>stk;
        int cnt=0,mx=-1;
        for(int i=0;i<(int)str.size();i++){
            if(stk.empty()){
                cnt++;
                stk.push(str[i]);
        }else if(stk.top()==str[i]){
                cnt++;
                mx=max(mx,cnt);
            }else if(stk.top()!=str[i]){
                cnt=1;
                mx=max(mx,cnt);
                stk.push(str[i]);
            }
        }
        cout<<mx<<endl;
    }
}