#include<bits/stdc++.h>
using namespace std;
bool ispalindrome(string str){
    int j=str.size()-1;
    for(int i=0;i<str.size();i++){
        if(str[i]!=str[j] && i<=j){
            return false;
        }
        j--;
    }
    return true;
}
int main(){
    string str;cin>>str;
    if(ispalindrome(str)){
        cout<<"Palindrome\n";
    }else{
        cout<<"Not Palindrome\n";
    }
    return 0;
}