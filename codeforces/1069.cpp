#include<bits/stdc++.h>
using namespace std;
stack<char>stk;
int CountDiamond(string str){
    int cnt=0;
    for(int i=0;i<str.size();i++){
        if(str[i]=='<'){
            stk.push(str[i]);
        }else if(str[i]=='>' && stk.empty()){
            stk.push(str[i]);
        }else if(str[i]=='>' && stk.top()=='<'){
            stk.pop();
            cnt++;
        }
    }
    return cnt;
}
int main(){
    int n;cin>>n;while(n--){
        string str;cin>>str;
        cout<<CountDiamond(str)<<"\n";
    }
    return 0;
}