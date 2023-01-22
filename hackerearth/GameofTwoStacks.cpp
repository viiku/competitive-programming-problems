#include<bits/stdc++.h>
using namespace std;
bool inrange(char ch){
    if((ch>='A' && ch<='Z') || (ch>='a' && ch<='z')){
        return true;
    }
    return false;
}
bool isPalindrome(string s) {
    int i=0,j=(int)s.size()-1;
    while(i<=j){
        if(inrange(s[i]) && inrange(s[j])){
            if(s[i]!=s[j]-32 || s[i]!=s[j]+32){
                return false;
            }
            i++;
            j--;
        }else if(inrange(s[i]) && !inrange(s[j])){
            j--;
        }else{
            i++;
        }
    }
    return true;
}
int main(){
    string str;getline(cin,str);
    if(isPalindrome(str)){
        cout<<"yes";
    }else{
        cout<<"no";
    }
}
