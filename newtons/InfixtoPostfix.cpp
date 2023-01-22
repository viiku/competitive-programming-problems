#include<bits/stdc++.h>
using namespace std;
int precedence(char ch){
  if(ch=='^') return 3;
  else if(ch=='/' || ch=='*') return 2;
  else if(ch=='+' || ch=='-') return 1;
  else
    return -1;
}
void infixtoPostfix(string str){
  string result;
  stack<char>stk;
  for(char c:str){
    if((c>='a' && c<='z') || (c>='A' && c<='Z') || (c>='0' && c<='9')){
      result+=c;
    }else if(c=='('){
      stk.push('(');
    }else if(c==')'){
      while(stk.top()!='('){
        result+=stk.top();
        stk.pop();
      }
      stk.pop();
    }else{

    }
  }
}
int main(){
  string str;cin>>str;

}
