#include<bits/stdc++.h>
using namespace std;
int main(){
    stack<char>stk;
    int t;cin>>t;while(t--){
        string str;cin>>str;
        int cnt=0,cnt1=0;
        for(int i=0;i<str.size();i++){
            if(str[i]=='('){
                cnt++;
            }else if(str[i]=='['){
                cnt1++;
            }
        }
    }
}